#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) a.first < b.first;
    return a.second < b.second;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> three(3);
    vector<pair<int, int>> count;
    count.push_back(make_pair(1, 0));
    count.push_back(make_pair(2, 0));
    count.push_back(make_pair(3, 0));
    int ans2[] = { 1,3,4,5 };
    int ans3[] = { 3,1,2,4,5 };
    for (int i = 0; i < answers.size(); i++) {
        if ((i + 1) % 5 != 0 && (i + 1) % 5 == answers[i])
            count[0].second++;
        if ((i + 1) % 5 == 0 && 5 == answers[i])
            count[0].second++;

        if (i % 2 == 0 && answers[i] == 2)
            count[1].second++;
        if (i % 2 == 1 && ans2[((i - 1) / 2) % 4] == answers[i])
            count[1].second++;

        if (i % 2 == 0 && ans3[((i + 1) / 2) % 5] == answers[i])
            count[2].second++;
        if (i % 2 == 1 && ans3[((i - 1) / 2) % 5] == answers[i])
            count[2].second++;
    }

    //요거 second 기준으로 sort할것
    sort(count.begin(), count.end(), comp);

    if (count[0].second == count[2].second) {
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if (count[1].second == count[2].second) {
        answer.push_back(count[1].first);
        answer.push_back(count[2].first);
    }
    else answer.push_back(count[2].first);
    return answer;
}
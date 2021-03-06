#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> new_arr;
    //i-th to j-th -> k-th num
    //idx = i-1 ~ j-1, k-1    

    for (int m = 0; m < commands.size(); m++) {
        int i = commands[m][0];
        int j = commands[m][1];
        int k = commands[m][2] - 1;
        new_arr.resize(j + 1 - i);
        copy(array.begin() + i - 1, array.begin() + j, new_arr.begin());
        sort(new_arr.begin(), new_arr.end());
        answer.push_back(new_arr[k]);
        new_arr.clear();
    }
    return answer;
}
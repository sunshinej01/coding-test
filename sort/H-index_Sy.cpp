#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    //Áß°£°ª idx
    int mid = citations.size() / 2;
    for (int i = mid; i >= 0; i--) {
        if (i > 0 && citations[i] > citations[i - 1]) {
            if (citations.size() - i >= citations[i]) { //&& citations[i] >= i+1){
                answer = citations[i];
                break;
            }
            else {
                for (int j = 1; j < citations[i] - citations[i - 1]; j++) {
                    if (citations.size() - i >= citations[i] - j && citations[i] - j >= i + 1) {
                        answer = citations[i] - j;
                        break;
                    }
                }
                if (answer != 0) break;
            }
        }
        else if (i == 0) {
            if (citations.size() >= citations[0]) answer = citations[0];
            else if (citations.size() == 1 && citations[0] >= 1) answer = 1;
            else answer = citations.size();
        }
    }
    return answer;
}
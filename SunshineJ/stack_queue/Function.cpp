#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int temp = 0;
    for (int i = 0; i < progresses.size(); i++) {
        int rest = ceil((float)(100 - progresses[i]) / speeds[i]);
        temp++;
        for (int j = i + 1; j < progresses.size(); j++) {
            if (i + 1 != progresses.size() && rest >= (int)ceil((float)(100 - progresses[j]) / speeds[j])) {
                temp++;
                i++;
            }
            else break;
        }
        answer.push_back(temp);
        temp = 0;
    }

    return answer;
}
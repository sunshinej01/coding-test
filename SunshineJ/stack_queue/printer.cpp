#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int max = 0, idx = 0, temp = 0;
    while(answer!=priorities.size()){
        for(int i=0;i<priorities.size();i++){
            int j = temp + i;
            if(j>=priorities.size()) j -= priorities.size();
            if(priorities[j]!=-1 && max<priorities[j]){
                    max = priorities[j];
                    idx = j;
            }
        }
        if(idx == location) return answer+1;
        else{
            priorities[idx] = -1;
            max = 0;
            answer++;
            temp = idx;
        }
    }
}

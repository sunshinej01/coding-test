#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int row = 0, col = 0;
    //brown = 2*(row+col-2)
    //yellow = row*col-brown
    //1<=row<=brown-2, 1<=col<=brown-2
    for(row=1;row<=brown-2;row++){
        for(col=1;col<=row;col++){
            if(brown == 2*(row+col-2) && yellow == row*col-brown){
                answer.resize(2);
                answer[0]=row;
                answer[1]=col;
                return answer;
            }
        }
    }
}

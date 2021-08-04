#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
            ans += s[i];
        }
        if (i < s.size() - 2) {
            if (s.substr(i, 3) == "one") ans += "1";
            else if (s.substr(i, 3) == "two") ans += "2";
            else if (s.substr(i, 3) == "six") ans += "6";
        }
        if (i < s.size() - 3) {
            if (s.substr(i, 4) == "zero") ans += "0";
            else if (s.substr(i, 4) == "four") ans += "4";
            else if (s.substr(i, 4) == "five") ans += "5";
            else if (s.substr(i, 4) == "nine") ans += "9";
        }
        if (i < s.size() - 4) {
            if (s.substr(i, 5) == "three") ans += "3";
            else if (s.substr(i, 5) == "seven") ans += "7";
            else if (s.substr(i, 5) == "eight") ans += "8";
        }
    }
    answer = atoi(ans.c_str());

    return answer;
}

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    string str_a = to_string(a), str_b = to_string(b);
    int x = str_a.size(), y = str_b.size();
    if (x == y) {//자릿수 같을 때
        if (a == b) return a > b;
        else return a > b;
    }
    else {
        if (x < y) {//a<b
            for (int i = 0; i < y - x; i++) str_a += str_a[0];
            if (str_a < str_b) return a > b;
            else if (str_a > str_b) return a < b;
            else {
                if (str_b[y - 2] > str_b[0]) return a < b;
                else if (str_b[y - 2] < str_b[0]) return a > b;
                else return a > b;
            }
        }
        else {//a>b
            for (int i = 0; i < x - y; i++) str_b += str_b[0];
            if (str_a < str_b) return a < b;
            else if (str_a > str_b) return a > b;
            else {
                if (str_a[x - 2] > str_a[0]) return a < b;
                else if (str_a[x - 2] < str_a[0]) return a > b;
                else return a > b;
            }
        }
    }
}

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), comp);

    if (numbers[0] == 0) //모든 원소가 0
        answer = "0";
    else {
        for (int i = 0; i < numbers.size(); i++) {
            answer += to_string(numbers[i]);
        }
    }
    return answer;
}
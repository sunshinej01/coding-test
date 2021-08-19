#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void find_prime(string s, int* answer, int* prev) {
    bool is_prime = true;
    int num = atoi(s.c_str());
    for (int j = 2; j < num; j++) {
        if (num % j == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime == true) *answer += 1;
    *prev = num;
}

int solution(string numbers) {
    int answer = 0;
    string s = "";
    int prev = 0;

    for (int i = 0; i <= numbers.size(); i++) {
        sort(numbers.begin(), numbers.end());
        do {
            s = "";
            for (int j = 0; j < i; j++) {
                cout << numbers[j] << " ";
            }
            cout << endl;
            s = numbers.substr(0, i);
            if (s != "1" && s != "0" && s[0] != '0' && prev != atoi(s.c_str()))
                find_prime(s, &answer, &prev);
            reverse(numbers.begin() + i, numbers.end());
        } while (next_permutation(numbers.begin(), numbers.end()));
    }

    return answer;
}
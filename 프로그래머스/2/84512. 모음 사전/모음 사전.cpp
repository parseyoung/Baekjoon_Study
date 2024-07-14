#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int solution(string word) {
    int answer = 0;
    string s = "AEIOU";
    int powSum = 0;

    // 모든 가능한 단어의 수 계산 (길이 1부터 5까지)
    for(int i = 0; i < 5; i++)
        powSum += pow(5,i);

    // 주어진 단어의 길이만큼 반복하여 각 문자의 사전 순서 계산
    for(int i = 0; i < word.length(); i++) {
        answer += s.find(word[i]) * powSum + 1;
        powSum /= 5;  // 길이 감소에 따른 가능한 단어 수 업데이트
    }
    return answer;
}

int main() {
    cout << solution("AAAAE") << endl;  // 6
    cout << solution("AAAE") << endl;   // 10
    cout << solution("I") << endl;      // 1563
    cout << solution("EIO") << endl;    // 1189
    return 0;
}

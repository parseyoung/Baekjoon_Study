#include <algorithm>
#include <vector>

using namespace std;

vector<int> m1 = {1, 2, 3, 4, 5};  // 수포자 1의 패턴
vector<int> m2 = {2, 1, 2, 3, 2, 4, 2, 5};  // 수포자 2의 패턴
vector<int> m3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};  // 수포자 3의 패턴

vector<int> solution(vector<int> answers) {
    vector<int> answer;  // 결과를 담을 벡터
    
    int s[3] = {0, 0, 0};  // 각 수포자의 맞춘 문제 수를 저장할 배열
    
    // 답안을 체크하여 각 수포자가 맞춘 문제의 수를 기록합니다.
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == m1[i % 5]) s[0]++;  // 수포자 1의 패턴과 비교
        if (answers[i] == m2[i % 8]) s[1]++;  // 수포자 2의 패턴과 비교
        if (answers[i] == m3[i % 10]) s[2]++;  // 수포자 3의 패턴과 비교
    }
    
    // 가장 많은 문제를 맞춘 수포자의 점수를 구합니다.
    int max_count = max({s[0], s[1], s[2]});
    
    // 최대 점수를 얻은 수포자들의 번호를 결과 벡터에 추가합니다.
    for (int i = 0; i < 3; i++) {
        if (s[i] == max_count) {
            answer.push_back(i + 1);  // 수포자의 번호는 1, 2, 3입니다.
        }
    }
    
    // 결과 벡터를 오름차순으로 정렬합니다.
    sort(answer.begin(), answer.end());
    
    return answer;  // 결과를 반환합니다.
}

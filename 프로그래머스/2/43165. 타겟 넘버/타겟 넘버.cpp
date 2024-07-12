#include <vector>
using namespace std;

void dfs(const vector<int>& numbers, int target, int index, int currentSum, int& answer) {
    // 모든 숫자를 다 처리한 경우
    if (index == numbers.size()) {
        // 현재의 합계가 타겟과 일치하는 경우
        if (currentSum == target) {
            answer++;
        }
        return;
    }
    
    // 현재 숫자에 대해 + 연산을 수행한 경우
    dfs(numbers, target, index + 1, currentSum + numbers[index], answer);
    // 현재 숫자에 대해 - 연산을 수행한 경우
    dfs(numbers, target, index + 1, currentSum - numbers[index], answer);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, target, 0, 0, answer);
    return answer;
}

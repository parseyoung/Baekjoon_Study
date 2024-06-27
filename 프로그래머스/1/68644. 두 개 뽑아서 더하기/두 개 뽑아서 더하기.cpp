#include <vector>
#include <algorithm> // sort 함수 사용을 위해 추가
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    // 두 수를 더한 결과를 저장할 answer 벡터
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            int sum = numbers[i] + numbers[j];
            // answer에 sum이 이미 존재하지 않는 경우에만 추가
            if (find(answer.begin(), answer.end(), sum) == answer.end()) {
                answer.push_back(sum);
            }
        }
    }
    
    // 오름차순으로 정렬
    sort(answer.begin(), answer.end());
    
    return answer;
}

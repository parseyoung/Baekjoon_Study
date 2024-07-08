#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    
    int answer = 0;
    queue<int> bridge;
    int curr_weight = 0;
    
    for (int i = 0; i < bridge_length; i++)
        bridge.push(0);
    
    int idx = 0;
    
    while(idx < truck_weights.size() || curr_weight > 0)
    {
        answer++;
        
        curr_weight -= bridge.front();
        bridge.pop();
        
        if(idx < truck_weights.size())
        {
            if(curr_weight + truck_weights[idx] <= weight)
            {
                bridge.push(truck_weights[idx]);
                curr_weight+=truck_weights[idx];
                idx++;
            }
            
            else
            {
                bridge.push(0);
                
            }
        }
    }
    
    return answer;
}

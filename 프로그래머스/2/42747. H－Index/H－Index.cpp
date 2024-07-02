#include <vector>
#include <algorithm>
using namespace std;


bool cmp (int a, int b)
{
    return a > b;
}

int solution(vector<int> citations)
{
    int answer = 0;
    
    sort(citations.begin(), citations.end(), cmp);
    
    for(int i = 0; i < citations.size(); i++)
    {
        if(citations[i] >=i+1)
            answer++;
        
        else break;
    }
    
    return answer;
}
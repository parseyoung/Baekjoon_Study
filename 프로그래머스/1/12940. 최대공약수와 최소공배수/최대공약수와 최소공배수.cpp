#include <string>
#include <vector>
using namespace std;
vector<int> solution(int n, int m)
{
    vector<int> answer;
    
    if (n > m) swap(n, m);
    
    int result = n*m;
    int GCD = 0, LCM = 0;
    
    while(m != 0)
    {
        int temp = m;
        m = n%m;
        n=temp;
    }
    
    GCD = n;
    
    LCM = result / GCD;
    
    answer.push_back(GCD);
    answer.push_back(LCM);
    
 
    
    
    return answer;
}
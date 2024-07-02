#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    return a+b > b+a;
}
string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> str;
    
    for(int c : numbers)
    {
        str.push_back(to_string(c));
    }
    
    sort(str.begin(), str.end(), cmp);
    
    if(str[0] == "0") return "0";
    
    for (string s : str)
    {
        answer+=s;
    }
    
    
    return answer;
}
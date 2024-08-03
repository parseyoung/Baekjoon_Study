#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isVPS(const string &ps)
{
    stack<char> s;
    for(char ch : ps)
    {
        if(ch=='(')
        {
            s.push(ch);

        }
        else{
            if(s.empty() || s.top() != '('){
                return false;            
        }
        s.pop();
        }    

    }
    return s.empty();
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for(int i = 0; i<T; i++)
    {
        string ps;
        getline(cin, ps);
        
        if(isVPS(ps))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }


    return 0;
}
#include <iostream>
using namespace std;


int main()
{
   int n, m;
    int arr[101] = {0, };
    int a, b, c;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        for(int j = a-1; j < b; j++)
            arr[j] = c;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
    
}
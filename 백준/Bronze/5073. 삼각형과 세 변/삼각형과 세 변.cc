#include <iostream>
using namespace std;

int main() {
    while (true) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        int m = (a > b ? a : b) > c ? (a > b ? a : b) : c;

        if (m < a + b + c - m) {
            if (a == b && b == c)
                cout << "Equilateral" << endl; // 모든 변의 길이가 같은 경우
            else if (a == b || b == c || a == c)
                cout << "Isosceles" << endl;   // 두 변의 길이가 같은 경우
            else
                cout << "Scalene" << endl;     // 모든 변의 길이가 다른 경우
        } else {
            cout << "Invalid" << endl; // 삼각형이 성립되지 않는 경우
        }
    }

    return 0;
}
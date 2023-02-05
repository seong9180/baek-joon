#include <iostream>
using namespace std;

int main()
{
    //두 정수 a,b 를 입력받은 다음 a+b 를 출력하는 프로그램
    //첫째 줄에 a, 둘째 줄에 b
    int a,b;
    cin >> a;
    cin >> b;
    while (a<0 || b<10)
    {
        cout << a + b;
        break;
    }
    return 0;
}

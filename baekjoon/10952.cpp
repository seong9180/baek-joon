#include <iostream>
using namespace std;

int main()
{
    // 두 정수 a ,b 입력
    int a,b;
    /*
    입력은 여러 개의 테스트 케이스로 이루어져 있다.

    각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

    입력의 마지막에는 0 두 개가 들어온다.
    */
   while(true)
   {
    cin >> a >> b;
    if(a ==0 || b==0){ //a,b 입력이 모두 0 일 때, cout 하기 전에 break
        break;
    }
    cout << a + b << "\n";
   }
   return 0;

}
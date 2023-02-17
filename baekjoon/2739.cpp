#include <iostream>

using namespace std;

int main()
{
    //N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
    int n;
    cin >> n;
    for(int i=1; i<=9; ++i){//구구단을 출력하기 위해 1~9까지 루프
        cout << n << " * " << i << " = " << n*i <<"\n";
    }
    return 0;
}
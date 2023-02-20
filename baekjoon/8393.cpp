#include <iostream>

using namespace std;

int main()
{
    //n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
    int n; //입력받는 n
    int sum = 0; //합을 저장할 변수

    cin >> n;

    for(int i = 1; i<=n ;++i){
        sum = sum + i;
    }

    cout << sum << "\n";
    return 0;
}
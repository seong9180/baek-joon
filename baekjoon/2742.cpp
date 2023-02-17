#include <iostream>

using namespace std;

int main()
{
    //자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cout << n-i <<"\n";
    }
    return 0;
}
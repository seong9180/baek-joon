#include <iostream>

using namespace std;

int main()
{
    //자연수 n이 주어졌을 때, 1부터 n 까지 한 줄에 하나씩 출력하시오

    int n;
    cin >> n;

    for(int i=1; i<=n; ++i){
        cout<<i<<"\n"; //endl 사용 시 시간초과 노출되었음. 아마 for 문 돌떄마다 버퍼?를 비워서 그런 듯.
    }
    return 0;
}
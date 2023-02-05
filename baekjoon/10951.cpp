#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int t=0; //테스트 케이스의 개수
    //t 라는 변수를 초기화-선언 한 상태에서 배열을 선언해버리면 output[0] 인 배열이 됨.
    //배열을 쓰고자 했던 이유 : 입력을 한번에 저장하고. 한번에 출력하기 위해서.
    int output[t]; 
    while(!(cin >> a >> b).eof())
    {
        //cin >> a >> b;
        output[t] = a + b;
        t++;
    }
    for(int i=0; i< t;i++)
    {
        cout << output[t] <<"\n";
    }
    return 0;
} 


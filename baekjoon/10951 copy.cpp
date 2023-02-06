#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin.tie(NULL); //
    //int t=0; //테스트 케이스의 개수
    //t 라는 변수를 초기화-선언 한 상태에서 배열을 선언해버리면 output[0] 인 배열이 됨.
    //배열을 쓰고자 했던 이유 : 입력을 한번에 저장하고. 한번에 출력하기 위해서.
    //int output[t]; 
    while(!(cin >> a >> b).eof()) //eof. 더 이상의 입력이 없을 때 종료되도록. 입력할 때 ctrl + d 누르면 eof 입력임!
    {
        cout << a + b <<"\n";
        //cin >> a >> b;
        //output[t] = a + b;
        //t++;
        //현재 작동하고 있지는 않음. 배열을 쓰지 않고 푸는 방법을 써서 풀어볼 예정
        //배열을 써서 푸는 방법도 추후에 생각해봐야 할 것 같음. -> cin.tie(null); 을 사용해볼 예정
    }
    /* for(int i=0; i< t;i++)
    {
        cout << output[t] <<"\n";//endl 을 쓰기보다는 "\n" 을 사용하는게 수행시간 면에서 이득이 있음.
    }*/
    return 0;
} 


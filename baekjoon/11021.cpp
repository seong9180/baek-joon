#include <iostream>

using namespace std;

int main()
{
    int a,b; //정수 a,b
    int t; //테스트케이스 t
    cin >> t;
    for(int i=0; i<t ; i++)
    {
        /*while(0<a || b<10){ // a,b 의 입력 범위에 맞추기. 그런데 꼭 while 을 써야 할까?
            cin >> a >> b;
            break;
        }*/ //틀렸습니다.

        //if 와 while 을 썼을 경우의 수행속도 차이가 궁금해졌다.
        /*if(0<a || b<10){
            cin >> a >> b;
        }*/ //틀렸습니다.

        cin >> a >> b; // 시간부족으로 틀리는 건가 해서 a,b 범위 빼봄.
        //통과됨. 시간부족? 메모리초과? 

        cout << "Case #" << i+1 <<": " << a+b << "\n"; //출력 형식에 맞추기.
    }   
    return 0;
}
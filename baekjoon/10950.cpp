//https://jaimemin.tistory.com/1521 - 참고해보기
#include <iostream>
using namespace std;
/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.*/

int main()
{
    int t;
    cin >> t;
    int output[t]; // 출력 for 문에서 돌리기 위해 밖에서 output 배열 선언
    for (int i = 0; i<t; i++)
    {
        int a,b = 0;
        //테스트케이스 입력을 따로 두개씩 받으려면 이중 배열일 필요할 것이라 생각했었음.
        //그냥 스페이스바로 인풋하니까 잘 들어가지던..?
        cin >> a >> b;
        //int output[t];
        //내부에 output 배열을 선언하니까 출력 for문에서 output 배열을 인식 x
        while(0<a || b<10)
        {
            output[i] = a + b;
            break;
        }
        //cout << output[i] << endl;
    }
    for (int i = 0; i<t; i++)
    {
        cout << output[i] << endl;
    }

    return 0;
}
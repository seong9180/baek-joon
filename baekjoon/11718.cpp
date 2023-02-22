#include <iostream>
#include <string> //getline() 을 이용하기 위함.

using namespace std;

int main()
{
    //입력을 전부 받고 한번에 출력하기 위해 배열에 값을 저장.
    string str[100];
    for(int i=0; i<100 ;i++)
    {
        //getline 의 default delimiter 는 개행 문자.
        getline(cin, str[i]);
        if (str[i] == ""){
            break;
        }
    }
    for(int i=0; i<100 ;i++)
    {
        cout << str[i] << "\n";
    }//음하하
    return 0;
}
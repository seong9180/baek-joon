#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    for(int i = 0; i<100 ; i++) //입력 문장 100개일 떄.
    {
        getline(cin,str);
        if(str==" "){ //각 문장의 앞 뒤에 공백이 있을 수 있음. 기존의 "" 에서 " "로 공백2개일 때 break; 조건 설정
            break;
        }
        cout << str << "\n";
    }
    return 0;
}
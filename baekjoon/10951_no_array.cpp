#include <iostream>
using namespace std;

int main()
{
    int a,b;
    //cin.tie(NULL); 
    //cout.tie(NULL);

    while(true) //eof. 더 이상의 입력이 없을 때 종료되도록. 입력할 때 ctrl + d 누르면 eof 입력임!
    {
        cin >> a >> b;
        if(cin.eof()) break;
        cout << a + b <<"\n";
    }

    return 0;
} 

#include <iostream>
#include <string> //getline() 을 이용하기 위함.

using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        cout << str[i];

        if(i % 10 == 9) cout << endl;
    }
    return 0;
}
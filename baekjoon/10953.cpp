#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int t;
    cin >> t;
    //핵심 원리. ',' 를 저장하기 위한 char 변수를 선언한다.
    char c;
    for(int i=0; i<t ; i++)
    {
        cin >> a >> c >> b;
        cout << a + b << "\n";
    }

    return 0;
}
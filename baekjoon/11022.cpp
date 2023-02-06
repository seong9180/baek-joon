#include <iostream>

using namespace std;

int main()
{
    int a,b; //정수 a,b (0<a || b<10)
    int t; //테스트케이스 갯수
    cin >> t;
    
    for(int i=0; i<t ;i++)
    {
        cin >> a >> b;
        cout << "Case #" << i+1 << ": " << a << " + " << b << " = " << a+b << "\n";
    }
    return 0;
}
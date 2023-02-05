#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    cout << endl;
    while (0<a || b<10)
    {
        cout << a + b;
        break;
    }
    return 0;
}
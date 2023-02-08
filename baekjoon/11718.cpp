#include <iostream>
#include <string>

using namespace std;

int main()
{
    for(int i=0; i<100 ;i++)
    {
        char string[i];
        cin >> string[i];
        if(cin.eof()){
            break;
        }
        cout << string[i] << "\n";
    }

    return 0;
}
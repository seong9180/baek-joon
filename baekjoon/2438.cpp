#include <iostream>

using namespace std;

int main()
{
    //첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
    int n; //입력받을 n
    cin >> n;
    for(int i =1; i<=n; ++i){
        cout<< "*";
        for(int j =2; j<=i; ++j){
            cout<< "*";
        }
        cout<<"\n";
    }
    return 0;
}
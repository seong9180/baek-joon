#include <iostream>

using namespace std;

int main()
{
    /*
    첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
    하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
    */
   int n;
   cin >> n;

   for(int i=1; i<=n; ++i){
    for(int k=2; k<=i; ++k){
        cout << " ";
    }
    for(int j=n; j>i; --j){
        cout << "*";
    }
    cout << "*" <<"\n";
   }
   return 0;

}
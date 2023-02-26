#include <iostream>

using namespace std;

int main()
{
    /*
    첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
    별은 가운데를 기준으로 대칭이어야 한다.
    */
   int n;
   cin >> n;

    for(int i =0; i<n; ++i){
        for(int x = n-1; x>i; --x){ //원래 좌측 띄어쓰기가 한 칸 더 되어 있었음.
         cout << " ";
        }

        for(int j =1; j<=i; ++j){
         cout << "*";
        }

        cout << "*";

        for(int y =1; y<=i; ++y){
         cout << "*";
        }
        /* 오른쪽 공백을 출력하는 부분
        for(int k =n-1; k>i; --k){ //원래 좌측 띄어쓰기가 한 칸 더 되어 있었음.
         cout << " ";
        }
        */
        cout << "\n";
    }
    return 0;
}


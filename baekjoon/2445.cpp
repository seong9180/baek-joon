#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<(2*n-1); ++i){
        //간단하게 생각하면 for 문 3개를사용하면 될 것 같은 느낌인데.. 안 그럴 것 같다.
        if(i <= n){
            for(int j=0;j<=i;++j){
                cout << "*";
            }
            for(int k=2*(n-1);k>0;----k){// 이런식으로 적어도 괜찮나.. k값이 2 씩 줄었으면 좋겠다.
                cout << " "; //공백 출력
            }
            for(int j=0;j<=i;++j){
                cout << "*";
            }
            cout << "\n";
        }
        else{
            for(int x=n-1;x<i;--x){
                cout << "*";
            }
            for(int y=2;y<=(2*n-1);++++y){
                cout << " ";
            }
            for(int x=n-1;x<i;--x){
                cout << "*";
            }
            cout << "\n";
            
        }
        
    }
    return 0;
}
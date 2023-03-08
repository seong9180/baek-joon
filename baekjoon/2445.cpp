#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<=2*n-1; ++i){
        //간단하게 생각하면 for 문 3개를사용하면 될 것 같은 느낌인데.. 안 그럴 것 같다.
        if(i<n){
            for(int j=1;j<=i;++j){
                cout<<"*";
            }
            for(int k=2*(n-i);k>0;--k){ //사실 내 생각으로는 ----k 라고 생각했었다. 하지만 모양은 --k 가 맞네.
                cout<<" ";
            }
            for(int a=1;a<=i;++a){
                cout<<"*";
            }
            cout<<"\n";
        }
        else if(i==n){
            for(int b=1;b<=2*n;++b){
                cout<<"*";
            }
            cout<<"\n";
        }
        else{ //i와 for 문의 값을 비교해야 함
            for(int c=n-1;c>=i-n;--c){
                cout<<"*";
            }
            for(int d=0;d<2*(i-n);++d){
                cout<<" ";
            }
            for(int e=n-1;e>=i-n;--e){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}
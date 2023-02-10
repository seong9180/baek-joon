#include <iostream>
using namespace std;
/*
const int MAX = 100;//이거 이렇게 무식하게 다 배열 지정해도 되나 모르겠네

using namespace std;
int dot_sum(int n)
{
    //int Dot_sum[MAX]; 
    //Dot_sum[1] = 5;//배열의 0번지가 1단계를 의미. 
    int sum = 5;
    if(n>1){
        //Dot_sum[n] = Dot_sum[n-1] + 3*(n+1) - 2;
        for(int i =1; i<n; i++)
        {
            sum = sum + 3*(n+1) - 2;
        }
    }
    //return Dot_sum[n];
    return sum;
}

int main()
{
    int N; //단계를 입력.
    cin >> N ;
    cout << N << "단계의 점의 갯수는 모두 :" << dot_sum(N) << "입니다." << "\n";
    return 0;
}
내가 고민했었던 내용. 수식은 맞았지만 2번째 이후로 꾸준히 3씩 증가한다는 것을 캐치하지 못함.
물론, 수식을 구했기 떄문에 수식을 적용하는 방법으로도 풀어볼 예정.
*/ 

int main()
{
    //참고한 링크 : https://j3sung.tistory.com/400
    int n;
    int num;
    int sum;

    sum = 5;
    num = 7;

    cin >> n;

    for(int i = 2; i<=n ; ++i){
        sum += num; //sum + num = 12 (i=2, 2번째 단계)
        num += 3; //2번쨰 단계 이후 지속적으로 3씩 증가함.

        sum %= 45678; //문제 조건 : 첫째 주의 n 단계에서 점의 개수를 45678 로 나눈 나머지를 출력한다.
        num %= 45678; //이 두 조건이 왜 for 문 안에 존재해야 하는지 모르겠음.
    }
    //sum %= 45678; // 그래서 for 문 밖으로 빼 봤는데 잘 되네..
    //num %= 45678; ㅋㅋ 이대로 백준 제출했더니 틀렸다. 왜 for 문 안에 나머지 연산이 들어가야 하는데?

    cout << sum << endl;

    return 0;
}

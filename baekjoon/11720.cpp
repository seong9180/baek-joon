#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n; //숫자의 갯수. (1<= n <= 100)
    int sum = 0; //숫자들의 총합을 저장할 변수
    int number[100]; //최대 100개니까 아예 100개의 배열을 선언.
    cin >> n; //n 입력 받고
    for(int i = 0; i<n ; i++)
    {
        scanf("%1d", &number[i]); //사실 왜 되는지는 잘 모르겠어. 이해는 안 가는걸?
        //cout << number[i] <<"\n"; -> 제대로 한자리씩 입력을 받고 있나 테스트.
        sum = sum + number[i]; //sum 이라는 변수를 매 루프마다 number[i] 값을 더해서 저장함으로써 총합을 구함.
    }
    cout << sum << "\n"; 
    return 0;

}
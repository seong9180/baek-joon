#include <iostream>

using namespace std;

int main()
{
    //N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
    int n; //주어지는 정수

    /*
    1. cin 을 사용해서 n개의 정수를 입력 받을 떄, 별도의 배열에 저장하지 않고도 별개의 정수로 
    봐 줄 것인지.
    2. cin 을 사용하지 않는다면 scanf 를 사용할 지, getline 을 사용할지.
    */

   int min = 0;
   int max = 0;

    cin >> n; 
    int input[n];


   for(int i=0; i<n; ++i){
    cin >> input[i];
    if(i == 0){
        max = input[0];
        min = input[0];
    }

    if(input[i] > max){
        max = input[i];
    }
    if(input[i] < min){
        min = input[i];
    }
   }
   cout << min << " " << max << "\n" ;

   return 0;
}
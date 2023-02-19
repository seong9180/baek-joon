#include <iostream>

using namespace std;

int main()
{
    /*
    writen by : seong9180
    1. 모든 열의 갯수를 저장하는 방법
    2. 전체 일수 합산을 7로 나눴을 때 나머지로 요일을 맞추는 것.
    3. 입력을 받는 게 x월 y일 인 경우에 무슨 요일인지를 알 수 있어야 함.
    입력으로 x월 y일을 입력 받았을 경우에 어떤식으로 값을 저장하면 될지.
    */
   int month,day; //month = 월 day = 일
   cin >> month >> day ; //x월 y일을 입력받음.

   /*
   만약 4월 12일이 들어왔다고 하면, 
   아 12칸짜리 배열을 선언해서 각 월마다 일수를 따로 저장해둔다음에
   해당 월이 들어오면 해당 배열엘 저장된 월 수를 가져와서 일수를 계산하고 7로 나눈다!
   */
  //  2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
  int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
  // 월 별 일수를 저장하는 배열을 생성.
  // 배열에 값이 제대로 저장되는지 test.
  //cout << month_day[month-1] << endl; 정상적으로 잘 나오는 것을 확인했다.
    int month_sum = 0; //입력 받은 월 이전 월 일수를 합산하는 변수 선언.
    if(month == 1){
        month_sum = 0;
    }
    else{ //테스트케이스 5가지 중 4번째를 틀리게 만들었던 부분.
        /* 이전 코드
        for (int i = 2; i<= month; ++i){
            month_sum = month_sum + month_day[i-1];
        }
        설명 : 단순하게 1월 이후의 월 에 해당하는 케이스여서 i=2 부터 해당 월 (<= month) 까지로 설정했던 게 패인이였다.
        왜냐하면, 지금 0으로 초기화한 month_sum 을 month_day[i-1] 로 더해서 값을 저장하고 있는데 
        배열의 경우 [1]이 시작이 아니라 [0]이 시작이기 때문에 
        입력값이 2월 14일인 경우, [i-1] 는 month_day[1]이 되고, 배열 순서상 2월을 나타내기 때문이다.
        2월은 전부 더하는 게아니라 1월 전체 일수(31) + 14일(2월 14일) = 45일이 나와야 하는데, 
        2월을 전부 더하게 되어서 1월 전체 일수 + 2월 전체 일수 + 14 가 되어버렸기 때문.
        그래서 아래와 같이 수정함으로써, 입력받은 월 -1 만큼의 값을 더할 수 있게 만들었다.
        */
        for (int i = 1; i< month; ++i){
            month_sum = month_sum + month_day[i-1];
        }
    }
    int total_sum = month_sum + day; //입력받은 월 일수 + 이전 월 일수
    //1월 1일이 월요일. 1일차 = 나머지 1 (월요일)
    //SUN, MON, TUE, WED, THU, FRI, SAT
    if(total_sum%7 == 1){
        cout << "MON" <<  "\n" ;
    }
    else if(total_sum%7 == 2){
        cout << "TUE" <<  "\n" ;
    }
    else if(total_sum%7 == 3){
        cout << "WED" <<  "\n" ;
    }
    else if(total_sum%7 == 4){
        cout << "THU" <<  "\n" ;
    }
    else if(total_sum%7 == 5){
        cout << "FRI" <<  "\n" ;
    }
    else if(total_sum%7 == 6){
        cout << "SAT" <<  "\n" ;
    }
    else if(total_sum%7 == 0){
        cout << "SUN" <<  "\n" ;
    }
    // 해당 코드의 경우, c++  의 oop 구조를 적용해서 다시 작성해봐도 좋을 것 같다.
  return 0;
}
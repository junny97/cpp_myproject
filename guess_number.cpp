#include <iostream>
#include <stdlib.h> // srand()


using namespace std;

int main()
{
  int my_num, my_rand;
    int cnt=0;; // 몇번 예측했는지 설정
    srand((unsigned)time(NULL));

    my_rand=rand()%100+1;

    while(1)
    {
        cout<<"숫자를 입력하시오"<<endl;
        cin >>my_num;

        if (my_num == my_rand || my_num == 0)
        {
            break;
        }
        
        else if (my_num > my_rand)
        {
            cout<<"입력하신 값" << my_num << "보다 작습니다" <<endl;  
        }

        else if (my_num < my_rand)
        {
            cout<<"입력하신 값" << my_num << "보다 큽니다" <<endl;  
        }
        cnt++; // 한 번 시도할떄마다 예측 카운트 1씩 올라감
    }

         if(my_num==0) 
         {
         cout<<"포기하셨군요. 다음 기회에"<<endl;
         }

        else 
        {
        cout<<cnt<<"번째만에 정답을 맞추셨습니다."<<endl; 
        }
    
return 0;
}
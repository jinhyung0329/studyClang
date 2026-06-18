#include <stdio.h> 
enum state{WALK,RUN,JUMP}; //대문자로 쓰는게 관례. 0,1,2로 값 지정안하면 자동지정
int main()
{
    enum state stateNow; //enum Count 데이터형 변수 stateNow선언
    stateNow = RUN; //값대입
    printf("캐릭터상태번호:%d\n",stateNow);//RUN의값인 1출력
}
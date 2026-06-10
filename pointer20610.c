#include <stdio.h>
void fakeDeal(int antiqueCopy)
{
    printf("\n[모조품 거래 시작]\n");
    printf("모조품 가격 : %d억\n",antiqueCopy);

    antiqueCopy = 1;

    printf("모조품 가격 조작 : %d억\n",antiqueCopy);
    printf("[모조품 거래 종료]\n");
}

void realDeal(int *realAntiqueAddress)
{
    printf("\n[진품 거래 시작]\n");
    printf("진품 보관 위치 : %p\n", realAntiqueAddress);
    printf("현재 진품 가격 : %d억\n", *realAntiqueAddress);
    *realAntiqueAddress = 500;
    printf("진품 가격 변경 완료 : %d억\n",*realAntiqueAddress);
    printf("[진품 거래 종료]\n");
    

}

int main()
{
    //실제 골동품 가격
    int realAntique = 300;
    printf("====비밀 경매장====\n");
    printf("현재 진품 가격 : %d억\n", realAntique);
    printf("진품 보관위치 :%p\n", &realAntique);
    
    fakeDeal(realAntique);
    printf("\n모조품 거래 후 진품 가격 : %d억\n",realAntique);

    /*
    주소 전달 
    진품 보관위치를 알려주고 실제 진품 수정 가능
    */
   realDeal(&realAntique);
   printf("\n진품 거래 후 실제 가격 : %d억\n",realAntique);
   printf("\n====경매 종료====\n");
   return 0;
}
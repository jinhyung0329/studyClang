#include <stdio.h>

/*
int main()
{
    int arr[5] = {10,20,30,40,50};
    for (int i = 0;i<5;i++){
        printf("arr[%d]value :%d\n",i,arr[i]);
        printf("arr[%d]address:%p\n",i,&arr[i]);
        printf("\n");
    }
    return 0;
}
*/

int main()
{
    int arr[5] = {10,20,30,40,50};
    printf("%ld\n", &arr[1] - &arr[0]);
    printf("%ld\n", &arr[2] - &arr[1]);
    return 0;
}
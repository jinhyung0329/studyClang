#include <stdio.h>

/*
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//swap
int main()
{
    int x = 10;
    int y = 20;

    swap(&x,&y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
*/


void printArr(int* arr, int size)
{
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int nums[5] ={10,20,30,40,50};
    printArr(nums,5);
    return 0;

}
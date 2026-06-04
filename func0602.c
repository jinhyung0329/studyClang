#include <stdio.h>

/*

void test(int x)
{
    int y = x + 1;


    printf("x value      : %d\n", x);
    printf("y value      : %d\n", y);


    printf("\n");


    printf("x address     : %p\n", &x);
    printf("y address     : %p\n", &y);
}
*/

/*
int main()
{
    int a = 10;


    printf("a value      : %d\n", a);
    printf("a address     : %p\n", &a);


    printf("\n");


    test(3);


    return 0;
}


void test(int x){
    int y = x + 1;
    printf(" x = %d\n ",x);
    printf(" y = %d\n ",y);
}

int main(){
    printf("main start\n");
    test(3);
    return 0;
}
*/

int fact(int n){
    if(n==1){
        return 1;
    }    
    return n * fact(n-1);
}

int main(){
    printf("%d\n",fact(4));
    return 0;

}

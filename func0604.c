#include <stdio.h>
//fibonacci sequence

/*
int fibo(int n){
    if (n<=1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}


int main(){
    printf("%d\n",fibo(6));
    return 0;
}
*/


void test(int n){
    printf("%d\n", n);
    if (n>0){
        test(n-1);
    }
    printf("%d\n",n); 
}
int main(){
    test(3);
    return 0;
}


#include <stdio.h>

int count = 0;
void greet(){
    char arr[1000000]; //1000킬로바이트
    count ++;
    printf("call number: %d\n",count);
    greet();
}

int main(){
    greet();
    return 0;
}
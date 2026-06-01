#include <stdio.h>

/*
void fun2(){ 
    printf("f2"); 
    printf("end"); 
}
void fun1(){ 
    printf("f1\n");
    fun2(); 

}

int main(){ 
    printf("c1\n"); 
    fun1(); 
    printf("c2\n"); 
}
*/

void test(int x){
    int y = x+1;
    printf("x=%d y =%d\n",x,y);
}
int main(){
    test(3);
    test(5);
}

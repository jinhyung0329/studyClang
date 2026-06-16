#include <stdio.h>

/*
int main()
{
    char *words[3] = {"apple", "banana", "cherry"};
    for (int i = 0; i<3; i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
*/
/*
int main()
{
    int x = 10;
    int *p = &x;
    int **pp = &p;
    
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n",**pp);
    **pp = 100;

    printf("*x = %d\n",x);

    return 0;
}
*/

int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int main()
{
    int (*fp)(int,int);
    fp = add;
    printf("%d\n", fp(10,5));
    fp = sub;
    printf("%d\n",fp(10,5));
    fp = mul;
    printf("%d\n",fp(10,5));
    return 0;

}
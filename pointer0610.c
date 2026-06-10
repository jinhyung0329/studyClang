#include <stdio.h>

/*
int main()
{
    int x = 10;
    int* p = &x;
    printf("before x value: %d\n", x);
    *p = 20;
    printf("after x value: %d\n", x);

    return 0;

}
*/

/*
int main()
{
    int arr[3] = {10,20,30};
    printf("arr.      : %p\n",arr);
    printf("&arr[0].  : %p\n",&arr[0]);
    printf("&arr[1].  : %p\n",&arr[1]);
    printf("&arr[2].  : %p\n",&arr[2]);

    return 0;
}
*/

/*
int main()
{
    int arr[5] = {10,20,30,40,50};

    for (int i = 0; i < 5; i++){
        printf("arr[%d].     :%d\n", i, arr[i]);
        printf("*(arr + %d). :%d\n", i, *(arr+i));
        printf("\n");
    }
    return 0;

}
*/

int main(){
    char str[]= "hello";
    char *p = str;
    printf("str.    :%s\n",str);
    printf("p.     :%s\n", p);

    printf("str[0]. :%c\n", str[0]);
    printf("*p. : %c\n", *p);

    printf("str[1]. :%c\n", str[1]);
    printf("*(p+1). : %c\n", *(p+1));
    return 0;
}
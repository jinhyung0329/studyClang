#include <stdio.h>
/*
int main()
{
    char ch = 'A';
    int num = 10;
    float f = 3.14f;
    double d = 3.141592;
    long long big = 12345678900LL;
    printf("====Basic Data Types====\n");
    printf(" char value       :%c\n",ch);
    printf(" char size.       :%ld byte\n", sizeof(ch));
    printf("\n");

    printf(" int value       :%d\n",num);
    printf(" int size.       :%ld byte\n", sizeof(num));
    printf("\n");

    printf(" float value       :%f\n",f);
    printf(" float size.       :%ld byte\n", sizeof(f));
    printf("\n");

    printf(" double value       :%lf\n",d);
    printf(" double size.       :%ld byte\n", sizeof(d));
    printf("\n");

    printf(" long value       :%lld\n",big);
    printf(" long size.       :%ld byte\n", sizeof(big));
    printf("\n\n");


}

int main()
{
    char str[] = "hello";
    for(int i = 0; i<6;i++){
        printf("str[%d]char   :%c\n",i,str[i]);
        printf("str[%d]ascii. :%d\n",i,str[i]);
        printf("str[%d]address: %p\n",i,&str[i]);
        printf("\n");
    }
    printf("string output:%s\n",str);
    return 0;
}


int main()
{
    int scores[5] = {70,85,92,60,78};
    int max = scores[0];
    for(int i = 1;i<5;i++){
        if(scores[i]>max){
            max = scores[i];

        }
    }
    printf("Best Score:%d\n",max);
    return 0;
}


 int main()
 {
    char word[] = "coding";
    int length = 0;
    while(word[length] != '\0'){
        length++;
    }
    printf("string: %s\n",word);
    printf("string length: %d\n",length);
    return 0;

 }
 */

 int main()
{
    char names[5][20]={
        "Hong",
        "Kim",
        "Lee",
        "Park",
        "Choi"
    };
    int scores[5] = {85,92,76,88,95};
    char search[20];
    int found = 0;
    printf("Type the name of a student to search:");
    scanf("%s",search);
    for (int i = 0;i<5;i++){
        int same = 1;
        for (int j =0; names[i][j] != '\0' || search[j] != '\0'; j++ ){
            if(names[i][j] != search[j]){
                same = 0;
                break;
            }
        }
    if(same == 1){
        printf("\n Student Name: %s\n", names[i]);
        printf("NameL%d\n",scores[i]);
        printf("Address for Name Storage: %p\n",names[i]);
        found = 1;
        break;
    }
    }
    if(found == 0){
        printf("Student Info not found");
 
    }
    return 0;
}
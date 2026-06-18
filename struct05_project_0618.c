#include <stdio.h>

//구조체 포인터
typedef struct 
{
    char name[20];
    int score;
} Student;

/*
int main(void)
{
    Student s = {"Kim", 95};
    Student *p = &s;
    printf("%s\n", p->name);
    printf("%d\n", p->score);
    return 0;
}
*/
int main(void)
{
    Student s = {"Kim", 95};
    Student *p = &s;
    printf("%s\n", (*p).name);
    printf("%d\n", (*p).score);
    return 0;
}
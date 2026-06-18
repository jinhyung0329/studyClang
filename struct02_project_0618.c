#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[20];
    int score;
} Student;

int main(void)
{
    Student s;
    strcpy(s.name,"Kim");
    s.score = 95;

    printf("Name: %s\n", s.name);
    printf("Score: %d\n", s.score);

    return 0;
}
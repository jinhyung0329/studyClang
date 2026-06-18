#include <stdio.h>

typedef struct 
{
    char name[20];
    int score;
} Student;

void printStudent(Student s)
{
    printf("%s %d\n", s.name, s.score);
}

int main(void)
{
    Student s = {"Kim", 95};
    printStudent(s);
    return 0;
}
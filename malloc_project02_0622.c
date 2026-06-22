#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char name[20];
    int score;
} Student;

int main(){
    Student* s;
    s = malloc(sizeof(Student));
    s -> score = 100; 
    printf("%d\n", s->score);
    free(s);
    s = NULL;
    return 0;
}


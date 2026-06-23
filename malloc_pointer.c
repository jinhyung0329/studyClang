//구조체 포인터

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
    char name[20];
    int score;
} Student;

int main(void)
{
    Student *p = malloc(sizeof(Student));
    if (p == NULL) return 1;

    strcpy(p->name,"Choi");
    p->score = 88;
    printf("%s %d\n", p->name,p->score);

    free(p);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
    char name[20];
    int score;
} Student;

Student* make_students(int n)
{
    Student* arr =malloc(sizeof(Student) * n);
    if(arr == NULL){
        printf("Memory allocation failed");
        exit(1);
    }
    return arr;
}

void print_students(Student* arr, int n)
{
    for(int i = 0; i<n;i++){
        printf("%s %d\n",arr[i].name,arr[i].score);
    }
}
int main(void){
    int n = 3;
    Student* students = make_students(n);
    strcpy(students[0].name,"Kim");
    students[0].score = 85;
    strcpy(students[1].name,"Lee");
    students[1].score = 90;
    strcpy(students[2].name,"Park");
    students[2].score = 95;
    print_students(students,n);
    free(students);
    students = NULL;
    return 0;

}


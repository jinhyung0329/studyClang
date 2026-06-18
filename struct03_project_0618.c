#include <stdio.h>

/*
typedef struct 
{
    char name[20];
    int score;
} Student;

int main(void)
{
    Student students[3] =
    {
        {"Kim" , 90},
        {"Lee" , 80},
        {"Park", 100}
    };
    int sum = 0;
    for(int i = 0;i<3;i++){
        sum += students[i].score;
    }
    printf("Average = %.2f\n", sum / 3.0);
    return 0;
}
*/

typedef struct 
{
    char name[20];
    int score;
} Student;

int main(void)
{
    Student students[3] =
    {
        {"Kim" , 90},
        {"Lee" , 80},
        {"Park", 100}
    };
    int max = 0;
    for(int i = 1; i < 3; i++){
        if (students[i].score > students[max].score){
            max = i;
            
        }
    }
    printf("최고점 학생\n");
    printf("%s %d\n", students[max].name, students[max].score);
}
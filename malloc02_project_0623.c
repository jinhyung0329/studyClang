#include <stdio.h> 
#include <stdlib.h>

//2차원 동적할당
int main(void)
{
    int rows = 3;
    int cols = 4;
    // int **matrix주의할점은 얘는 2차원 배열이 아님. 
    //밑의 식은 각행의 시작 주소를 저장할 포인터배열을 만드는 과정
    int** matrix = malloc(sizeof(int*)*rows);

    //반복문을 3번돌며 빈칸 row []를 만들어줌
    for (int r= 0; r < rows ; r++){
        matrix[r] = malloc(sizeof(int)* cols);    
    }
    //여기서 값 넣고
    for (int r = 0; r < rows; r++){
        for (int c = 0; c<cols; c++){
            matrix[r][c] = r * 10 + c;
        }
    }
    //출력
    for(int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            printf("%3d",matrix[r][c]);
        }
        printf("\n");
    }
    // 각행에대해 free()해주고 다시 각열에대해 free()
    for(int r = 0; r<rows; r++){
        free(matrix[r]);
        matrix[r] = NULL;
    }
    free(matrix);
    matrix = NULL;
    return 0;
}
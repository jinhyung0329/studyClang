#include <stdio.h>
#include <stdlib.h>

//노드 정의
typedef struct node{
    int value;
    struct node* next; //다음노드를 가리키는 포인터
} NODE;

NODE* start = NULL; //시작노드를 가리키는 포인터

int main(void){
    NODE* new_node = NULL;
    if(start == NULL){
        new_node = (NODE*)malloc(sizeof(NODE));//동적할당을 만들어서 새 노드 생성
        new_node->next = NULL; //포인터 초기화
        start = new_node;
    }
    else{
        new_node = (NODE*)malloc(sizeof(NODE));
        new_node->next = NULL;
    }
    // 두번째 노드 생성
    new_node = (NODE*)malloc(sizeof(NODE));
    new_node->value = 20;
    new_node->next = NULL;

    //새노드 연결
    start->next = new_node;

    

    return 0;
}



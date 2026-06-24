#include <stdio.h>
#include <stdlib.h>

//노드 정의
typedef struct node{
    int value;
    struct node* next; //다음노드를 가리키는 포인터
} NODE;


void printList(NODE* start){
    NODE* cur = start;
    while(cur != NULL)
    {
        printf("%d ->",cur->value);
        cur = cur->next;
    }
    printf("NULL\n");
}


int main(void){
    NODE* start = NULL;
    NODE* new_node;
    NODE* cur;

    start = (NODE*)malloc(sizeof(NODE));
    start->value = 10;
    start->next = NULL;

    new_node = (NODE*)malloc(sizeof(NODE));
    new_node->value = 20;
    new_node->next = NULL;
    start->next = new_node;

    new_node = (NODE*)malloc(sizeof(NODE));
    new_node->value = 30;
    new_node->next = NULL;
    start->next->next = new_node;

    printf("Initial List\n");
    printList(start);

//마지막 위치에 삽입하기
    new_node = (NODE*)malloc(sizeof(NODE));
    new_node->value = 40;
    new_node->next = NULL;

    cur = start;
    while(cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = new_node;
    printf("\n마지막 삽입 후\n");
    printList(start);
//중간위치에 삽입하기
    new_node = (NODE*)malloc(sizeof(NODE));
    new_node->value = 25;

    cur = start->next;
    new_node->next = cur->next;
    cur->next = new_node;

    printf("\n중간 삽입 후\n");
    printList(start);

    return 0;
}

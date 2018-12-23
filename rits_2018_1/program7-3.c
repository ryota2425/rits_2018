

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __charqueue{
    char character;
    struct __charqueue *next;
} CharQueue;

typedef struct __queue{
    CharQueue *head;
    CharQueue *tail;
} Queue;

void Enque(Queue *queue, char character){
    CharQueue *x= malloc(1 *sizeof(CharQueue));
    x->character = character;

    if (queue->head == NULL){
    	queue->tail=queue->head = x;

}
    else{
        queue->tail->next = x;
        queue->tail = queue->tail->next;
    }

}
void Deque(Queue *queue, char *character){


    if(queue->tail == queue->head){
        character = queue->head->next;
        free(queue->head);
        queue->head = queue->tail = character;
    }
    else{
        queue->head = queue->head->next;
        queue->tail->next = queue->tail;

}
}


void Print(Queue *queue){
    CharQueue *x;
    x = queue->head;
    while(x != NULL){
        printf("%c", x->character);
        x = x->next;
    }
}

int main(void){
    Queue queue;
    int i;
    char x[20];

    queue.head = NULL;
    queue.tail = NULL;

    printf("文字列を入力してください：");
    fgets(x, 20, stdin);
    x[strlen(x) -1 ]='\0';

    for(i = 0; i < strlen(x); i++){
        Enque(&queue, x[i]);
    }

    for(i = 0; i < 3; i++){
        Deque(&queue, &x[i]);
        printf("Dequeしたデータは%cです。\n", x[i]);
    }

    char name[20];

    printf("文字列を入力してください：");
    fgets(name, 20, stdin);
    name[strlen(name)-1]='\0';

    for(i = 0; i < strlen(name); i++) {
        Enque(&queue, name[i]);
    }

    printf("キュー内のデータを表示します：");

    Print(&queue);

    return 0;
}




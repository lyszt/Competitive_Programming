#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node {
    char value;
    struct Node * next;
} Node;


typedef struct Queue {
    Node* front;
    Node* back;
} Queue;

bool isEmpty(Queue* queue){
    if(queue->front == NULL){
        return true;
    }
    return false;
}

Node* createNode(char input){
    Node* new = (Node*)malloc(sizeof(Node));
    if(new == NULL){
        return NULL;
    }
    new->value = input;
    new->next = NULL;
    return new;
}
Queue* createQueue(){
    Queue* new_queue = (Queue*)malloc(sizeof(Queue));
    if(new_queue == NULL){
        return NULL;
    }
    new_queue->back = NULL;
    new_queue->front = NULL;

    return new_queue;
}

void Insert(Queue* queue, char value){
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL) {
        
    }
}
int main(){

}

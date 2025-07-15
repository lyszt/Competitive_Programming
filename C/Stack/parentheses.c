#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node {
    char value;
    struct Node * next;
} Node;


typedef struct Stack {
    Node* front;
    Node* back;
} Stack;

bool isEmpty(Stack* stack){
    if(stack->front == NULL){
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
Stack* createStack(){
    Stack* new_stack = (Stack*)malloc(sizeof(Stack));
    if(new_stack == NULL){
        return NULL;
    }
    new_stack->back = NULL;
    new_stack->front = NULL;

    return new_stack;
}

void Insert(Stack* stack, char value){
    Node* new_node = createNode(value);
    if(new_node == NULL) {
        return;
    }
    if(stack->front == NULL){
        stack->back = stack-> front = new_node;
        return;
    }
    new_node->next = stack->back;
    stack->back = new_node;
}

int deStack(Stack* stack) {
    if(isEmpty(stack)) {
        printf("Overflow.");
        return -1;
    }
    Node* temp = stack->back;
    stack->back = temp->next;    
    if(stack->back == NULL){
        stack->front = NULL;
    }
    char data = temp->value;
    free(temp);
    return data;
}

char Peek(Stack* q)
{
    if (isEmpty(q))
        return '\0';
    return q->back->value;
}

void freeStack(Stack* stack){
    Node*current = stack->back;
    while(current != NULL){
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(stack);
}

bool isValid(char* s) {
    int string_length = strlen(s);
    Stack* cache = createStack();

    for(int i = 0; i < string_length; i++){
        char current_char = s[i];
        if(current_char == '(' || current_char == '[' || current_char == '{'){
            Insert(cache, current_char);
        }
        else if(current_char == ']' && Peek(cache) == '['){
            deStack(cache);
        }
        else if(current_char == ')' && Peek(cache) == '('){
            deStack(cache);
        }
        else if(current_char == '}' && Peek(cache) == '{'){
            deStack(cache);
        }
        else {
            freeStack(cache);
            return false;
        }
    }
    if(!isEmpty(cache)){
        return false;
    }
    freeStack(cache);
    return true;
}

int main() {
    char* tests[] = {
        "{[()]}",
        "{[(])}",
        "((()))",
        "({[)]}",
        "",
        "{[]})",
        "{[()]}"
    };
    for (int i = 0; i < sizeof(tests)/sizeof(tests[0]); i++) {
        printf("Test %d: %s => %s\n", i+1, tests[i],
               isValid(tests[i]) ? "Valid" : "Invalid");
    }
    return 0;
}

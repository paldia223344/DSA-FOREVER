#include <stdio.h>
#include <stdlib.h>
struct  stack{
    int size;
    int top;
    int *arr;
};
// STACK IS FULL 
int isFull(struct stack *p){
if(p->top == p->size-1){
    return 1; // stack is full
}else{
    return 0;// stack is not full
}}

//STACK IS EMPTY
int isEmpty(struct stack *p){
    if(p->top == -1){
        return  1 ; // stack is empty
    }else{
        return 0; // stack is not empty
    }
}
// POP OPEARTION
int pop(struct stack *p){
if(isEmpty(p)){
    printf("STACK UNDERFLOW\n");
}else{
    int value = p->top;
    p->top = p->top-1;
    return value;
}}

//PUSH
void push_operation(struct stack *p,int element){
    if(isFull(p)){
        printf("STACK OVERFLOW\n");
    }else{
        p->top++;
        p->arr[p->top] = element;
    }
}

int main() {
    int s ;
    printf("Enter size of a stack array\n");
    scanf("%d ",&s);
    struct stack *sp = (struct stack *) malloc(sp->size * sizeof(struct stack));
    sp->size = s;
    sp->top=-1;
    sp->arr = (int *) malloc(sizeof(int));
    printf("STACK IS SSUCCESSFULLY CREATED\n");
   printf("STACK BEFORE PUSHING ,full: %d",isEmpty(sp));
   printf("STACK BEFORE PUSHING ,full: %d",isFull(sp));

   

    return 0;
}
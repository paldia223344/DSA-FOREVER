#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
// isEmpty
int isEmpty(struct stack *ptr){
    if(ptr->top!=NULL){
        return -1;
    }else{
        return 0;
    }
}

//isFull
int isFull(struct stack *ptr){
   if(ptr->top == ptr->size-1){
    return 1;
   }else{
    return 0;
   }
}


int main()
{
struct stack *s;
s->size = 80;
s->top = -1;
s->arr = (int*) malloc(s->size *sizeof(int));
//pushing an element manully
// s->arr[0] = 4;
// s->top++;
//check if the stack is empty or not
if(isEmpty(s)){
    printf("The stack is empty");
}else{
    printf("The stack is not empty");
}

return 0;
}
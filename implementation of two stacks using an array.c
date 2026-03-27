#include <stdio.h>
#define MAX 20

int arr[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int x){
    if(top1+1 == top2){
        printf("STACK IS FULL\n");
        printf("OVERFLOW!\n");
        return;
    }
    top1++;
     return arr[top1] = x;
}

void push2(int x){
    if(top1+1 == top2){
        printf("STACK IS FULL\n");
        printf("OVERFLOW!\n"); 
        return;
    }
    top2--;
    return  arr[top2] = x;
}

int pop1(){
    if(top1 == -1){
        printf("STACK IS EMPTY\n");
        printf("UNDERFLOW\n");
        return -1;
    }
    printf("POPPED STACK ELEMENT : %d",arr[top1]);
    top1--;
}

int pop2(){
    if(top2 == MAX){
        printf("STACK IS EMPTY \n)");
        printf("UNDERFLOW\n");
        return -1;
    }
    printf("POPPED STACK ELEMENT : %d",arr[top2]);
    top2--;
}

int display(){
    printf("ARRAY\n");
    for(int i = 0; i<MAX ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    push1(12);
    push1(25);
    push1(15);
    push1(55);
    push2(67);
    push2(94);
    push2(32);
    push2(66);
    display();
    pop1();
    pop1();
    pop1();
    pop1();
    display();
    return 0;
}
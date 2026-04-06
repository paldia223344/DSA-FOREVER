#include <stdio.h>
#define MAX 15

int arr[MAX];
int top1 = -1;
int top2 = MAX;

int  push1(int x){
    if(top1+1 == top2){
        printf("STACK IS FULL\n");
        printf("OVERFLOW!\n");
        return;
    }
    top1++;
    return arr[top1] = x;
}

int  push2(int x){
    if(top1+1 == top2){
        printf("STACK IS FULL\n");
        printf("OVERFLOW!\n"); 
        return -1;
    }
    top2--;
    return  arr[top2] = x;
}

int  pop1(){
    if(top1 == -1){
        printf("STACK IS EMPTY\n");
        printf("UNDERFLOW\n");
        return -1;
    }
    int value = arr[top1];
    printf("POPPED STACK ELEMENT : %d",value);
    top1--;
    return value;
   
}

 int  pop2(){
    if(top2 == MAX){
        printf("STACK IS EMPTY \n)");
        printf("UNDERFLOW\n");
        return -1;
    }
    int value = arr[top2];
    printf("POPPED STACK ELEMENT : %d",value);
    top2++;
    return value;
}

int display(){
   printf("STACK1\n");
for (int i = 0; i <= top1; i++)
{
    printf("%d", arr[i]);
}
 printf("STACK2\n");
for(int i = MAX-1 ; i>= top2; i--){
printf("%d",arr[i]);
}
printf("\n");
}
int main() {
    int num;
    printf("Enter a number to be pushed\n");
    scanf("%d",&num);
    push1(num);
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
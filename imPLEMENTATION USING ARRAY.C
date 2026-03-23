#include <stdio.h>
#include <stdlib.h>

struct queue
{
   int size;
   int f;
   int r;
   int * arr;
};

//ISFULL
int isfull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }else{
        return 0;
    }
}

//ISEMPTY
int isempty(struct queue *q){
    if(q->f = q->r){
        return 1;
    }else{
        return 0;
    }
}

//ENQUEUE
void enqueue(struct queue *q,int value){
    if(isfull(q)){
        printf("Overflow cannot insert an element %d",value);
    }else{
        q->r++;
        q->arr[q->r] = value;
        printf("Inserted element %d",value);
    }
}

//DEQUEUE
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("Underflow of queue");
        return -1;
    }else{
        int value = q->arr[q-f];
        q-f++;
        return value;
       
    }
}
 //display
 int display(struct queue*q){
    if(isempty(q)){
        printf("cannot display ");
    }else{
        printf("Elements of queue\n");
        for (int i = q->f; i<= q->r ; i++)
        {
            printf("%d : ",q->arr[i]);
        }
        
    }
}
int main() {
    struct queue q;
    int s,element,value ;

    printf("Enter size \n");
    scanf("%d",&s);
    q.arr = (int*) malloc(q.size*sizeof(int));
    q.size = s;
    q.r = -1;
    q.f = 0;
       
    printf("Enter number of element to be inserted\n");
    scanf("%d",&element);

    for (int i = 0; i < element; i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&value);
        enqueue(&q,value);
    }
    display(&q);
    printf("Dequeued element %d\n",dequeue(&q));
    display(&q);
    free(q.arr);
    return 0;
}
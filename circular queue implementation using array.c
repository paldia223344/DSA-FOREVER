#include <stdio.h>
#include <stdlib.h>

struct circularqueue{
    int size;
    int f;
    int r;
    int *arr;
};

//ISEMPTY
int isempty(struct circularqueue *q){
    if(q->f == q->r){
        return 1;
    }
    return 0;
    }

//ISFULL
int isfull(struct circularqueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
//DEQUEUE
int dequeue(struct circularqueue *q){
    if(isempty(q)){
        printf("UNDERFLOW\n");
    }else{
        int value = q->arr[q->f];
        q->f = (q->f+1)%q->size;
        return value;
    }
}
//ENQUEUE
void enqueue(struct circularqueue *q,int value){
    if(isfull(q)){
        printf("OVERFLOW\n");
        return;
    }else{
        q->arr[q->r] = value;
        q->r = (q->r+1)%q->size;
    }
}
//DISPLAY
int display(struct circularqueue *q){
    if(isempty(q)){
        printf("EMPTY QUEUE CANNOT DISPLAY\n");
        return;
    }else{
        printf("Elements of a Queue\n");
        int i = q->f;
        while(i != q->r){
            printf("%d ",q->arr[i]);
            i = (i+1)%q->size;
        }
        printf("\n");
    }
}
int main() {
    struct circularqueue q;
    int s,element,value ;

    printf("Enter size \n");
    scanf("%d",&s);
    q.arr = (int*) malloc(q.size*sizeof(int));
    q.size = s;
    q.r = 0;
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
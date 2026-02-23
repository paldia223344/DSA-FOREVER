#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node* ptr){
while(ptr != NULL){
    printf("elemnet : %d\n", ptr->data);
    ptr= ptr->next;
}}

// DELETION OF THE FIRST NODE (HEAD NODE)
struct Node * DeletionofNode(struct Node *head){
struct Node *ptr=head;
head = head->next;
free(ptr);
return(head);
}


// deletion at index
struct Node * DeleteAtIndex(struct Node * head , int index){
struct Node * ptr = head;
struct Node * p= ptr->next;
int i=0;
while(i < index-1){
    ptr = ptr->next;
    p = p->next;
    i++;
}
ptr->next = p->next;
free(p);
return(head);
}

// delete the last node
struct Node * DeleteLastNode(struct Node * head){
    struct Node * p = head;
    struct Node * q = p->next;
    while(q->next != NULL){
        p = p->next;
        q= q->next;
    }
p->next = NULL;
free(q);
return head; 
}

//DELETE A NODE WITH A GIVEN  VALUE
struct Node * DeleteAtValue( struct Node *head,int value){
    struct Node * p = head;
    struct Node *q = p->next;
    while(q != value && q->data != NULL ){
        p= p->next;
        q= q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
        
    }
    return head;
}

int main() {
    int index;
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    // space in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next = second;
    second->data=74;
    second->next = third;
    third->data=57;
    third->next = fourth;
     fourth->data=117;
    fourth->next = NULL;

int value;
    printf("LINKED LIST BEFORE TRAVERSAL");
    LinkedListTraversal(head);

    //head = DeletionofNode(head); // DELETION OF THE FIRST NODE (HEAD NODE)

    printf("Enter an index at you want to delete the node\n");
    scanf("%d", &index);
    head = DeleteAtIndex(head,index); 
    printf("LINKED LIST AFTER TRAVERSAL");
     LinkedListTraversal(head);
     printf("LINKED LIST AFTER DELETION OF THE LAST  NODE");
     head =DeleteLastNode(head);
     printf("Enter a value");
     scanf("%d",&value);
     printf("LINKED LIST AFTER  THE DELETION OF THE NODE WITH A GIVEM VALUE ");
     DeleteAtValue(head,value);
    return 0;
}
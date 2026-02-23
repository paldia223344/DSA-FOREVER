#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
void Display(struct node* ptr){
while(ptr != NULL){
    printf(" %d-->", ptr->data);
    ptr= ptr->next;
}
printf("NULL\n");
}
//InsertionAtBegining
struct node * InsertionAtBegining(struct node * head, int data){
struct node * ptr = (struct node *) malloc(sizeof(struct node));
ptr->data = data;
ptr -> next = head;
return ptr;
}
//INSERTION AFTER A POSITION
struct node * InsertionAtPosition(struct node * head,int data,int position){
    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(i!= position-1){
        p = p->next;
    }
    ptr->data= data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main() {
    int element;
    struct node* head = NULL;
    struct node* temp = NULL;
    struct node* newNode = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
printf("Linked List : ");
Display(head);
   //InsertionAtBegining
printf("Enter an element to be inserted\n");
scanf("%d",&element);
printf("LINKED LIST  AFTER INSERTION AT BEGINING\n");
head = InsertionAtBegining(head,element);
Display(head);
//Insertion at a position
int position;
printf("Enter position at which you want to insert an element\n");
InsertionAtPosition(head);
Display(head);
//
    return 0;
}





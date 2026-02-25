#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
//Diaplay
void Display(struct node* ptr){
   while(ptr != NULL){
     printf(" %d-->", ptr->data);
     ptr= ptr->next;
}
printf("NULL\n");
}
// //InsertionAtBegining
// struct node * InsertionAtBegining(struct node * head, int data){
// struct node * ptr = (struct node *) malloc(sizeof(struct node));
// ptr->data = data;
// ptr -> next = head;
// return ptr;
// }
// //INSERTION AFTER A POSITION
// struct node * InsertionAtPosition(struct node * head,int data,int position){
//     struct node * ptr = (struct node *) malloc (sizeof(struct node));
//     struct node *p = head;
//     int i = 0;
//     while(i!= position-1){
//         p = p->next;
//         i++;
//     }
//     ptr->data= data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }
// //INSERTION AT LAST
// struct node * InsertionAtLast(struct node* head,int data){
//      struct node * ptr = (struct node*) malloc(sizeof(struct node));
//     struct node * p= head;
//     while(p->next != NULL){
//         p= p->next;
    
//     }
//     ptr->next = NULL;
//     p->next = ptr;
//     return head;
// }
// // Case 1: Deleting the first element from the linked list
// struct node *DeleteFirstNode(struct node* head){
//     struct node *ptr = head;
//     head = ptr->next;
//     free(ptr);
//     return head;
// }
// Case 2: Deleting the element at a given index from the linked list
struct node * DeletionAtIndex(struct node * head, int index){
    struct node *p=head;
    struct node *q= p->next;
    int i = 0;
    while (i!= index-1)
    {
        p=p->next;
        q= q->next;
    }
    p = p->next;
    q = q->next;
    q->next = p->next;
    free(p);
    return head;
}
int main() {
    // int element ,position;
    
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
// printf("Linked List : ");
// Display(head);
//    //InsertionAtBegining
// printf("Enter an element to be inserted\n");
// scanf("%d",&element);
// printf("LINKED LIST  AFTER INSERTION AT BEGINING\n");
// head = InsertionAtBegining(head,element);
// Display(head);
// //Insertion at a position
// printf("Enter position at which you want to insert an element\n");
// scanf("%d",position);
// head = InsertionAtPosition(head,element,position);
// Display(head);
// //insertion at last
// head = InsertionAtLast(head,element);
// Display(head);
// //deletiono first node
// head = DeleteFirstNode(head);
// Display(head);
//DELETION AT AN INDEX
int index;
printf("Enter index at which node to be deleted:");
scanf("%d",&index);
head = DeletionAtIndex(head,index);
Display(head);
    return 0;
}





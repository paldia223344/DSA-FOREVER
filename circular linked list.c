 #include <stdio.h>
 #include <stdlib.h>
 struct Node{
    int data;
    struct Node * next;
 };
//Traversal of circular linked list
 void TraverseCircularLinkedList(struct Node *head){
    struct Node *p = head;
    do
    {
    printf("%d ",p->data);
    p = p->next;
    } while (p!= head);
        printf("\n"); 
 }
 int main() {
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
    fourth->next = head;

TraversCircularLinkedList(head);

    return 0;
 }
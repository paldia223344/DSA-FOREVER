#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node* head) {
    struct node* p = head;
    while (p != NULL) {
        printf("%d  ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(struct node *head, int data) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    head->next = ptr;
}

void insertAtEnd(struct node *head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;

    if (head->next == NULL) {
        head->next = ptr;
        return;
    }

    struct node * p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
}
void insertAfter(struct node* p, int data) {
    if (p == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = p->next;
    p->next = newNode;
}

int main()
{
     struct node *head = NULL;
    insertAtBeginning(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAfter(head, 15); 

    display(head);


    return 0;
}
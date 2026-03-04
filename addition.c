// Additional operstion on linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int expo;
    float coeff;
    struct node * link;
};

void print (struct  node *head){
    struct node * temp = head;
    while(temp != NULL){
        printf("(%.fx^%d)",temp->coeff,temp->expo);
        temp = temp->link;
        if(temp != NULL){
            printf(" +  ");
        }else{
            printf("\n");
        }
        
    }
}

struct node * insert(struct node * head, float co,int ex){
    struct node * newnode = (struct node*) malloc(sizeof(struct node));
    newnode->link= NULL;
    newnode->coeff = co;
    newnode->expo= ex;
    struct node * temp = head;
    if(temp == NULL || ex >temp->expo){
        newnode->link = temp;
        head = newnode;
    }else{
        while(temp->link!= NULL  && temp->link->expo >ex){
              temp = temp->link;
        }
              newnode ->link = temp ->link;
              temp->link = newnode;
        }
    return head;
}

// INPUT OF THE POLYNOMIAL
struct node *create(struct node *head){
    int n,i,ex;
    float co;
    printf("Enter number of terms for a polynomial:  \n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter coefficient for %d term:  \n",i+1);
        scanf("%f",&co);
        printf("Enter eponent value for %d term \n",i+1);
        scanf("%d",&ex);
        head = insert(head,co,ex);
    }
    return head;
}

int main(){
    struct node* head = NULL;
    printf("Enter a polynomial\n");
    head = create(head);
    printf("Polynomial is : ");
    print(head);
    return 0;

}
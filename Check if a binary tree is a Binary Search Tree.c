#include<stdio.h>
#include<limits.h>

//Tree Node
struct node {
    int data;
    struct node * left;
    struct node *  right;
};

//Create new node
struct node * newNode(int value){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

//Function to check if a binary tree is a binary search tree BST
int isBST(struct node* root, int min, int max){
    if(root == NULL)
    return 1;
    if(root->data <= min || root->data >= max)
    return 0;
    return isBST(root->left, min, root->data ) && (root->right , root->data, max);



}

int main(){
    struct node * root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(20);
    root->left->left = newNode(2);
    root->left->right = newNode(8);
    
    if(isBST(root, INT_MIN, INT_MAX))
        printf("It is a BST");
    else
        printf("Not a BST");

    return 0;
     
}
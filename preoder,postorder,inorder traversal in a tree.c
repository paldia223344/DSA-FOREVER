#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// preorder traversal of a binary tree
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
// postorder traversal of a binary tree
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}
// inorder traversal of a binary tree
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}


//Function to check if a binary tree is a binary search tree BST
int isBST(struct node* root, int min, int max){
    if(root == NULL)
    return 1;
    if(root->data <= min || root->data >= max)
    return 0;
    return isBST(root->left, min, root->data ) && (root->right , root->data, max);
}

//code for searching in a BST 
struct node * search(struct node* root,int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data > key){
        return search(root->left , key);
    }else if (root->data < key)
    {
        return search(root->right, key);
    }
}

//insertion
void insert(struct node* root, int key){
    struct  node *prev = NULL;
    whille(root != NULL){
        prev = root;
        if(key == root->data){
            printf("Cannot insert %d , already in BST", key);
        return;
        }
        else if(key<root->data){
           root = root->left; 
           }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
    }
}

//deletion 
struct node *deleteNode(struct node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
    }

    //searching for the node to be deleted
    if (value < root->data){
        deleteNode(root->left,value);
    }
    else if (value > root->data){
        deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        deleteNode(root->left, iPre->data);
    }
}

struct node *inOrderPredecessor(struct node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}
int main()
{
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("PREORDER TRAVERSAL OF A BINARY TREE\n");
    preorder(p);
    printf("\n");

    printf("POSTORDER TRSVERSAL OF A BINARY TREE\n");
    postorder(p);
    printf("\n");

    printf("INORDER TRAVERSAL OF A BINARY TREE \n");
    inorder(p);
    printf("\n");

     // printf("%d", isBST(p)); 
    if(isBST(p)){
        printf("This is a bst" );
    }
    else{
        printf("This is not a bst");
    }

    // searching in binary search tree
struct  node * n = search(p,10);
    inOrder(p);
    printf("\n");
    deleteNode(p, 3);
    inOrder(p);

    return 0;
}
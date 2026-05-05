#include<stdio.h>
#include<stdlib.h>

int i,j,temp;

void printArray(int A[], int n){
    for(i = 0 ; i< n ; i++){
printf("%d\t",A[i]);
    }
}

void BubbleSort(int A[] , int n){
int sorted;
    for(i = 0 ; i< n-1 ; i++){
        sorted =1;//assume sorted
        for(j = 0; j< n-1-i; j++){
            sorted = 1;
            if(A[j] > A[j+1]){
                temp = A[j] ;
                A[j] = A[j+1];
                A[j+1] = temp;
                sorted = 0;//not sorted
            }
        }
        if(sorted){
            return ;
        }
    }
}

int main(){
    int A[] = {12,25,15,6,4,22,8,10};
    int n = 8;
    printArray(A,n);// BEFORE SORTING PRINTING OF THE ARRAY
    printf("\n");
    BubbleSort(A,n);//FUNCTION FOR BUBBLE SORT
    printArray(A,n);//AFTER SORTING 
}
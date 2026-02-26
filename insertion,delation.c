#include <stdio.h>

//display
void display(int arr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//insertion
int insertion(int arr[],int capacity,int size,int element,int index){
    if(size>capacity){
        return -1;
    }
    for(int i = size-1; i>= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index]= element;
    return 1;
}
//deletion
int deletion(int arr[],int size ,int index){
    for (int i = index ;i<size-1;i++){
arr[i] = arr[i+1];
    }
}

int main() {
    int arr[100]= {7,5,8,55,98};
    int size = 10,element = 44,index = 3;
    display(arr,size);
    //insertion
    insertion(arr,100,size,element,index);
    size += 1;
    display(arr,size);
    //deletion
    deletion(arr,size,index);
    display(arr,size);
    return 0;
}

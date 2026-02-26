#include <stdio.h>

//display
void display(int arr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
//linear search
int linearSearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[1] == element)
        {
            return i;
        }
        
    }
    return -1;
}

//binary search
int BinarySearch(int arr[],int element,int size){
    int low = 0,high= size-1,mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }else if(arr[mid]<element){
low = mid+1;
        }else{
            high= mid-1;
        }
    }
    return -1;
}
int main() {
    //Unsorted array in a linear search
    int arr[] = {1,2,3,4,5,6,55,78,66};
    int size = sizeof(arr)/sizeof(int);

    //Sorted array
     int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchindex= BinarySearch(arr,element,size);
printf("The element %d is found at index %d",element,searchindex);
    return 0;
}
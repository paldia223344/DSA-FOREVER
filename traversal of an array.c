 // TRAVERSAL OF AN ARRAY,VISITING ECH ELEMENT AT ONCE
 
 #include <stdio.h>
void display(int arr[],int n){
    printf("___ARRAY___\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
 int main() {
    int n;
    printf("Enter how many elements you want to insert\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of an array\n");
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
    display(arr,n);
    return 0;
 }
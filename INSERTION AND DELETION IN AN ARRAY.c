#include <stdio.h>

// display
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// insertion
int insertion(int arr[], int capacity, int size, int element, int index) {
    if (size >= capacity || index < 0 || index > size) {
        return -1; // invalid
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1; // success
}

// deletion
int deletion(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        return -1; // invalid
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return 1; // success
}

int main() {
    int n , arr[100] , size,  element, index;
printf("Enter  number of elements :  ");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    scanf("%d\n",arr[i]);
}
size = n;
printf("Intial array");
display(arr, size);

    // insertion
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter index to insert at: ");
    scanf("%d", &index);

    if (insertion(arr, 100, size, element, index) == 1) {
        size += 1;
        printf("After insertion: ");
        display(arr, size);
    } else {
        printf("Insertion failed (invalid index or capacity).\n");
    }

    // deletion
    printf("Enter index to delete: ");
    scanf("%d", &index);

    if (deletion(arr, size, index) == 1) {
        size -= 1;
        printf("After deletion: ");
        display(arr, size);
    } else {
        printf("Deletion failed (invalid index).\n");
    }

    return 0;
}


#include <stdio.h>

int linearSearchRecursive(int arr[], int target, int index, int size) {

    if (index >= size) {
        return -1;
    }
    
    if (arr[index] == target) {
        return index;
    }
    return linearSearchRecursive(arr, target, index + 1, size);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("enter the target :");
    scanf("%d",&target);
    
    int result = linearSearchRecursive(arr, target, 0, size);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}

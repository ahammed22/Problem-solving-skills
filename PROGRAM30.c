//Linear Search

#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {12, 45, 67, 89, 101, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, position;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    position = linearSearch(arr, size, key);

    if (position != -1) {
        printf("Element found at index %d\n", position);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

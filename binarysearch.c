#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            high = mid - 1;
        } 
        else {
            low = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int n, key, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at position %d.\n", key, result + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

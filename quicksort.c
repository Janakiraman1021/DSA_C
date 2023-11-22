#include <stdio.h>
#include <stdlib.h>

void quicksort(int arr[], int left, int right);

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[left];
        int i = left + 1;
        int j = right;

        while (i < j) {
            while (i < j && arr[i] < pivot) {
                i++;
            }

            while (j > i && arr[j] > pivot) {
                j--;
            }

            if (i < j) {
                
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        
        int temp = arr[left];
        arr[left] = arr[j];
        arr[j] = temp;

        
        quicksort(arr, left, j - 1);
        quicksort(arr, j + 1, right);
    }
}

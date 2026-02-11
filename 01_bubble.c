#include <stdio.h> 
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {        // Total Operations = n-1

        bool swapped = false;           // Flag to detect if any swap happened
        for (int j=0; j<n-i-1; j++) {   // Total Operations = (n-1) + (n-2) + ... + 1 = n(n-1)/2
            if (arr[j] > arr[j+1]) {
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
                swapped = true;
            }
        }

        if (!swapped)   break;
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]) ; 

    bubbleSort(arr, n) ; 

    printf("After sorting the array based on Bubble sort: "); 
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 

    return 0; 
}


// Time Complexity: O(n^2) in the worst and average case, O(n) in the best case (when the array is already sorted and we avoid unnecessary swaps using optimization flag).
// Space Complexity: O(1) as it is an in-place sorting algorithm.
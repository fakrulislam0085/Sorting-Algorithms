#include <stdio.h> 

void selectionSort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {   // Total Operations = n-1
        int minIndx = i; 

        for (int j=i+1; j<n; j++) {     // Total Operations = (n-1) + (n-2) + ... + 1 = n(n-1)/2
            if (arr[j] < arr[minIndx]) {
                minIndx = j;
            }
        }

        // Swap minimum with the first unsorted element 
        if (minIndx != i) {
            int temp = arr[i]; 
            arr[i] = arr[minIndx]; 
            arr[minIndx] = temp; 
        }
    }
}

int main() {
    int arr[] = {1, 5, 7, 2, 1, 9, 2, 6, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    selectionSort(arr, n);

    printf("After performing Selection Sort on the array: "); 
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 

    return 0;
}

// Time Complexity: O(n^2) in all cases (worst, average, and best) because of the nested loops.
// Space Complexity: O(1) as it is an in-place sorting algorithm.
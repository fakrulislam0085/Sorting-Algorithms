#include <stdio.h> 

void insertionSort(int arr[], int n) {
    
    for (int i=1; i<n; i++) {  // Start from the second element; the left side is considered sorted
        int key = arr[i]; 

        int j = i-1; // index of last element in the sorted part
        while (j>=0 && arr[j] > key) {  
            arr[j+1] = arr[j];  // Shift elements greater than key one position to the right
            j--;
        }
        
        arr[j+1] = key;     // Place key in its correct position
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    insertionSort(arr, n);  // Sorts the array in ascending order using insertion sort

    printf("After performing Insertion Sort on the array: "); 
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 

    return 0;
}


// Time Complexity: O(n^2) in the worst and average case, O(n) in the best case (when the array is already sorted).
// Space Complexity: O(1) as it is an in-place sorting algorithm.
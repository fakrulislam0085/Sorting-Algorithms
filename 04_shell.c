#include <stdio.h> 

void shellSort(int arr[], int n) {
    // Start with a big gap, then reduce the gap 
    for (int gap = n/2; gap > 0; gap /=2) {
        // Perform a gapped insertion sort for this gap size. 
        for (int i=gap; i<n; i++) {
            int temp = arr[i];
            int j = i; 

            while (j>=gap && arr[j-gap] > temp) {
                arr[j] = arr[j-gap]; 
                j -= gap;
            }
            arr[j] = temp;
        }
    }

}
int main() {
    int arr[] = {9, 8, 3, 7, 5, 6, 4, 1}; 
    int n = sizeof(arr) / sizeof(int) ; 

    shellSort(arr, n) ; 

    printf("After performing shell sort: \n") ;
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n") ;

    return 0;
}

/* Shell sort is an optimization of insertion sort that allows the exchange of items that are far apart. 
The idea is to arrange the list of elements so that, starting anywhere, considering every nth element gives a sorted list. 
Such a list is said to be h-sorted. It can also be thought of as h interleaved lists, each individually sorted. 
Beginning with large values of h, this rearrangement allows elements to move long distances in the original list, 
reducing large amounts of disorder quickly, and leaving less work for smaller h-sort steps to do. 
Shell sort is not a stable sorting algorithm. 

The time complexity of shell sort depends on the gap sequence used. 
The worst-case time complexity can be O(n^2) for some gap sequences, but with better gap sequences, 
it can be reduced to O(n log^2 n) or even O(n log n) in the best case.

The space complexity of shell sort is O(1) because it is an in-place sorting algorithm. 
*/
#include <stdio.h> 

void countingSort(int arr[], int n) {
    // Find max and min and then range
    int max = arr[0] , min = arr[0] ; 
    for (int i=1; i<n; i++) {
        if (arr[i] > max) max = arr[i] ; 
        if (arr[i] < min) min = arr[i] ; 
    }

    int range = max - min + 1 ; 
    int countArr[range] ; 
    int outputArr[n] ; 

    // Initialize count array with all zeros
    for (int i=0; i<range; i++) 
        countArr[i] = 0 ; 


    // 1. Store count of each digit in count array (Array of Simple Occurrence)
    for (int i=0; i<n; i++) 
        countArr[arr[i] - min]++ ;  // i = position in arr, arr[i]-min = bucket in countArr 

    printf("Count array after counting occurrences: ") ;
    for (int i=0; i<range; i++)
        printf("%d ", countArr[i]) ;
    printf("\n") ;

    // 2. Update the count array by adding the previous counts (Cumulative Count) (Array of Multiple occurrences)
    for (int i=1; i<range; i++)
        countArr[i] += countArr[i-1] ;  

    printf("Count array after cumulative count: ") ;
    for (int i=0; i<range; i++) 
        printf("%d ", countArr[i]) ;        
    printf("\n") ;
    

    // 3. Build the output array (right to left for stability) 
    for (int i=n-1; i>=0; i--) {
        int cntArr_Index = arr[i] - min ;  // Get the index of this element in count array
        int output_Index = countArr[cntArr_Index] -1 ; // Get the output index of this element in output array
        outputArr[output_Index] = arr[i] ; 
        countArr[cntArr_Index]-- ;
    } 

    // Copy the output array to arr, so that arr now contains sorted numbers
    for (int i=0; i<n; i++) {
        arr[i] = outputArr[i] ;
    }

}

int main() {
    int arr[] = {9, 8, 3, 7, 5, 6, 4, 1} ; 
    int n = sizeof(arr) / sizeof(int) ; 

    countingSort(arr, n) ; 

    printf("After performing counting sort: ") ;
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]) ;
    }
    printf("\n") ; 

    return 0; 
}

// Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
// Space Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
#include <stdio.h> 

void countingSortByDigit(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};
    
    // Count occurrences of each digit
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    
    // Cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    
    // Build output(right to left for stability)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
    int max = arr[0]; 
    for (int i=1; i<n; i++) 
        if (arr[i] > max)  max = arr[i];        // We need to know the maximum number to know the number of digits
    
    for (int exp = 1; max/exp > 0; exp *= 10) 
        countingSortByDigit(arr, n, exp);      // Do counting sort for every digit. Note that instead of passing the digit number, exp is passed. exp is 10^i where i is the current digit number
}

int main() {
    int a[] = {200, 63, 37, 820, 2, 67, 743, 294, 11}; 
    int n = sizeof(a) / sizeof(int);

    radixSort(a, n); 

    printf("After performing radix sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
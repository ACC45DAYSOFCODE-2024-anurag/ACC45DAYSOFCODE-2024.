#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Main function
int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the size of the array
        int *A = (int *)malloc(N * sizeof(int));

        // Read the array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Sort the array
        qsort(A, N, sizeof(int), compare);

        // Find the maximum frequency of any element
        int maxFreq = 1, currentFreq = 1;

        for (int i = 1; i < N; i++) {
            if (A[i] == A[i - 1]) {
                currentFreq++;
            } else {
                if (currentFreq > maxFreq) {
                    maxFreq = currentFreq;
                }
                currentFreq = 1; // Reset count for the new element
            }
        }
        // Check the last element frequency
        if (currentFreq > maxFreq) {
            maxFreq = currentFreq;
        }

        // Minimum operations required
        int minOperations = N - maxFreq;

        printf("%d\n", minOperations); // Output the result

        free(A); // Free the allocated memory
    }

    return 0;
}


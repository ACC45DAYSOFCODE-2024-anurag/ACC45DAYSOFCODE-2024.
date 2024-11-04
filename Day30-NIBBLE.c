#include <stdio.h>

int main() {
    int T, N;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read the number of bits for the current test case
        scanf("%d", &N);
        
        // Check if N is a multiple of 4
        if (N > 0 && N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }
    
    return 0;
}


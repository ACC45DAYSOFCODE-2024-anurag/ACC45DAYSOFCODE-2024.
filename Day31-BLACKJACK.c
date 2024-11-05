#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        // Calculate the required third number C
        int C = 21 - (A + B);
        
        // Check if C is between 1 and 10 (inclusive)
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);  // Output the third number
        } else {
            printf("-1\n");  // Impossible to win
        }
    }
    
    return 0;
}


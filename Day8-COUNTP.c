#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Size of the array
        scanf("%d", &N);
        
        int sum = 0; // To store sum of the array
        int hasOdd = 0; // To check if there's at least one odd number
        
        for (int i = 0; i < N; i++) {
            int A;
            scanf("%d", &A);
            sum += A;
            if (A % 2 != 0) {
                hasOdd = 1; // Set flag if the number is odd
            }
        }
        
        // Check the conditions for a valid partition
        if (sum % 2 == 0 && hasOdd) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
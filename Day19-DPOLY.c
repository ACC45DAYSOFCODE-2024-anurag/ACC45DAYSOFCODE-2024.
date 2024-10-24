#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int coefficients[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }

        // Find the degree of the polynomial
        int degree = -1; // Initialize degree to -1 (indicating no terms)
        for (int i = N - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i; // Update degree if a non-zero coefficient is found
                break;
            }
        }

        // Output the degree of the polynomial
        printf("%d\n", degree);
    }

    return 0;
}


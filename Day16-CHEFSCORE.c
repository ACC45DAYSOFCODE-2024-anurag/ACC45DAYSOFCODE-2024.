#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        // Maximum possible score Chef can achieve
        int maxScore = N * X;

        // Check if Y can be achieved
        if (Y >= 0 && Y <= maxScore && Y % X == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}



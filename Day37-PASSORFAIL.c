#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X, P;
        // Read values of N, X, and P for each test case
        scanf("%d %d %d", &N, &X, &P);

        // Calculate the total score
        int totalScore = 4 * X - N;

        // Determine if Chef passes or fails
        if (totalScore >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}


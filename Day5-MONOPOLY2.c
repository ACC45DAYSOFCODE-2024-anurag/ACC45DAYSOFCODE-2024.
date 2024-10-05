#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S); // Read profits of companies A, B, C, D

        // Calculate total profit
        int totalProfit = P + Q + R + S;

        // Check for monopoly condition
        if (P > (totalProfit - P) || Q > (totalProfit - Q) || R > (totalProfit - R) || S > (totalProfit - S)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


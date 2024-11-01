
#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        // Read initial scores A and B
        scanf("%d %d", &A, &B);
        // Read target scores C and D
        scanf("%d %d", &C, &D);

        // Check if the target scores are reachable
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}

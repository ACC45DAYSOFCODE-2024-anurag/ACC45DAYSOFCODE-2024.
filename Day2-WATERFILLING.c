#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3); // Read the state of the bottles

        // Count how many bottles are empty
        int emptyCount = (B1 == 0) + (B2 == 0) + (B3 == 0);

        // Determine if it's time to fill the bottles
        if (emptyCount >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}




#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int count = 0; // to count Wolverine-like minions
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);

            // Calculate the new characteristic value after transmogrification
            int new_characteristic = characteristic + K;

            // Check if it's divisible by 7
            if (new_characteristic % 7 == 0) {
                count++;
            }
        }

        // Output the result for this test case
        printf("%d\n", count);
    }

    return 0;
}

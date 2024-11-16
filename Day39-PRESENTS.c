#include <stdio.h>

int main() {
    int T, N, coins;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        // Calculate the number of free gifts
        int free_gifts = N / 5;

        // Calculate the number of paid gifts
        int paid_gifts = N - free_gifts;

        // Calculate the total cost
        coins = paid_gifts;

        printf("%d\n", coins);
    }

    return 0;
}



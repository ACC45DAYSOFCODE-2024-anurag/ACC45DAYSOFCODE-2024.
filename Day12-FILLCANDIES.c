#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        long long N, K, M;
        scanf("%lld %lld %lld", &N, &K, &M); // Read N, K, M

        // Calculate the maximum candies one bag can hold
        long long maxCandiesPerBag = K * M;

        // Calculate the minimum number of bags required
        long long bagsNeeded = (N + maxCandiesPerBag - 1) / maxCandiesPerBag;

        printf("%lld\n", bagsNeeded); // Output the result
    }

    return 0;
}



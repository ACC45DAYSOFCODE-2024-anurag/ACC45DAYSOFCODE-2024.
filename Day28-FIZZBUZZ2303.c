#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N; // Number of players to choose from
        scanf("%d", &N); // Read the number of players
        
        // Calculate the number of ways to choose captain and vice-captain
        long long choices = (long long)N * (N - 1);
        
        // Output the result for the current test case
        printf("%lld\n", choices);
    }

    return 0;
}



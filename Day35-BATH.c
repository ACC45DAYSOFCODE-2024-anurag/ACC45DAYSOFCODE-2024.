#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Input the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);  // Input the values of X and Y for each test case

        // Calculate how many buckets of water we can fill with the geyser's capacity
        int total_buckets = X / Y;

        // Each person needs exactly 2 buckets of water
        int max_people = total_buckets / 2;

        // Output the result for this test case
        printf("%d\n", max_people);
    }

    return 0;
}



#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d); // Read tastiness values

        // Calculate the maximum tastiness
        int max_tastiness = (a > b ? a : b) + (c > d ? c : d);

        // Output the result
        printf("%d\n", max_tastiness);
    }

    return 0;
}


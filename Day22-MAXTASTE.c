#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d; // Tastiness of ingredients A, B, C, D
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the possible tastiness combinations
        int max_tastiness = 0;

        // A + C
        int option1 = a + c;
        // A + D
        int option2 = a + d;
        // B + C
        int option3 = b + c;
        // B + D
        int option4 = b + d;

        // Find the maximum tastiness
        max_tastiness = option1;
        if (option2 > max_tastiness) max_tastiness = option2;
        if (option3 > max_tastiness) max_tastiness = option3;
        if (option4 > max_tastiness) max_tastiness = option4;

        // Output the maximum tastiness for the current test case
        printf("%d\n", max_tastiness);
    }

    return 0;
}



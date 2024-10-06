#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read the rental cost and purchase cost
        
        if (X >= Y) {
            printf("0\n"); // If rental cost per month is not less than purchase cost
        } else {
            // Calculate maximum months of renting where renting is strictly less than purchasing
            int max_months = (Y - 1) / X; // We use (Y-1) to ensure it's strictly less
            printf("%d\n", max_months);
        }
    }

    return 0;
}



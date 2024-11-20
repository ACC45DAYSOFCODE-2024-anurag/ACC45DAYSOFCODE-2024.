#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, i, count1, countMinus1;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int *arr = (int *)malloc(n * sizeof(int));

        count1 = 0;
        countMinus1 = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] == 1) {
                count1++;
            } else {
                countMinus1++;
            }
        }

        if (n % 2 != 0) {
            printf("-1\n");
        } else {
            int half = n / 2;
            int flips_needed = abs(count1 - half);

            printf("%d\n", flips_needed);
        }

        free(arr);
    }

    return 0;
}


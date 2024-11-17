#include <stdio.h>

int main() {
    int T, X, Y, R;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &X, &Y, &R);

        int extra_sticks = R / 30;
        int total_sticks = X + extra_sticks;
        int max_plates = (total_sticks + Y - 1) / Y;  // Corrected line

        printf("%d\n", max_plates);
    }

    return 0;
}


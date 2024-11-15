#include <stdio.h>

int main() {
    int T, N, A, B, total_duration;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &A, &B);

        // Calculate the total duration
        total_duration = ((N + 1) / 2) * B + (N / 2) * A;

        printf("%d\n", total_duration);
    }

    return 0;
}
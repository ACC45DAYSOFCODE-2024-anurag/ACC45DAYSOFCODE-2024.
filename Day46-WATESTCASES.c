#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int sizes[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &sizes[i]);
        }

        char V[N + 1];
        scanf("%s", V);

        int min_size = INT_MAX;
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') {
                min_size = (min_size < sizes[i]) ? min_size : sizes[i];
            }
        }

        if (min_size == INT_MAX) {
            printf("-1\n"); // No failed test case
        } else {
            printf("%d\n", min_size);
        }
    }

    return 0;
}

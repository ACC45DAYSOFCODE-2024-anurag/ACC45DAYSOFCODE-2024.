#include <stdio.h>

int main() {
    int T, N, X;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &X);

        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
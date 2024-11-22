#include <stdio.h>
#include <math.h>

int main() {
    int T, N;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        int evenDivisors = 0, oddDivisors = 0;
        int sqrtN = sqrt(N);

        for (int i = 1; i <= sqrtN; i++) {
            if (N % i == 0) {
                if (i % 2 == 0) {
                    evenDivisors++;
                } else {
                    oddDivisors++;
                }

                if (N / i != i) {
                    if ((N / i) % 2 == 0) {
                        evenDivisors++;
                    } else {
                        oddDivisors++;
                    }
                }
            }
        }

        if (evenDivisors > oddDivisors) {
            printf("1\n");
        } else if (evenDivisors == oddDivisors) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}



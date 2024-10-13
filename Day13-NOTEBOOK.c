#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Weight of the pulp in kgs
        scanf("%d", &N);

        // Calculate the number of pages from N kg of pulp
        int total_pages = N * 1000; // Each kg produces 1000 pages

        // Calculate the number of notebooks
        int notebooks = total_pages / 100; // Each notebook consists of 100 pages

        printf("%d\n", notebooks);
    }

    return 0;
}



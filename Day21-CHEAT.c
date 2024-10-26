#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of spooky days
        scanf("%d", &N);

        // Calculate the number of Tuesdays in the next N days
        // Since today is Monday, the first Tuesday is on the 2nd day
        int tuesdaysCount = (N + 5) / 7; // Complete weeks starting from the 2nd day

        printf("%d\n", tuesdaysCount);
    }

    return 0;
}


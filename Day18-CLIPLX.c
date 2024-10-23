#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y; // X = points needed, Y = remaining matches
        scanf("%d %d", &X, &Y);

        // Calculate the minimum wins needed
        // If RCB wins 'w' matches, they will get 2w points.
        // If they tie the remaining matches (Y - w), they will get (Y - w) points.
        // Total points = 2w + (Y - w) = w + Y
        // We need w + Y >= X
        // Thus, w >= X - Y

        int min_wins = X - Y;

        // If min_wins is less than 0, it means RCB can qualify without winning all matches.
        if (min_wins < 0) {
            min_wins = 0;
        }

        printf("%d\n", min_wins);
    }

    return 0;
}


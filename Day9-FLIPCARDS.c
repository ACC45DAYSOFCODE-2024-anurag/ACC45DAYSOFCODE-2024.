#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        // Calculate the number of face-down cards
        int face_down = N - X;

        // The minimum operations required will be the smaller of the two
        // either flip all face-up cards to face-down or all face-down cards to face-up
        int min_operations = X < face_down ? X : face_down;

        printf("%d\n", min_operations);
    }

    return 0;
}

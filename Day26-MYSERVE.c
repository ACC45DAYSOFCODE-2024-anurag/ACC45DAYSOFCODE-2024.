#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int P, Q; // Scores of Alice and Bob
        scanf("%d %d", &P, &Q);
        
        // Total points played
        int totalPoints = P + Q;

        // Each player serves 2 times before switching
        // Determine the number of complete serving cycles (4 points per cycle)
        int completeCycles = totalPoints / 4;

        // Determine the position in the current serving cycle
        int positionInCycle = totalPoints % 4;

        // Determine whose serve it is based on the cycle and position
        if (positionInCycle < 2) {
            printf("Alice\n"); // Alice serves in the first 2 serves of the cycle
        } else {
            printf("Bob\n");   // Bob serves in the last 2 serves of the cycle
        }
    }
    
    return 0;
}



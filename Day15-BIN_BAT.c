#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int totalTime = 0;
        int rounds = log2(N); // Calculate the number of rounds
        
        // Calculate total time taken for all rounds
        totalTime += rounds * A; // Time taken for all rounds
        
        // Calculate total break time
        if (rounds > 0) {
            totalTime += (rounds - 1) * B; // Break time after each round except the last
        }
        
        printf("%d\n", totalTime);
    }
    
    return 0;
}



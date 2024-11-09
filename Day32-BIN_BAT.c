#include <stdio.h>
#include <math.h>  // For log2 function

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        // Calculate the number of rounds: log2(N) because N is a power of 2
        int rounds = (int)(log2(N)); 
        
        // Total time is the sum of time for rounds and breaks
        int total_time = rounds * A + (rounds - 1) * B;
        
        printf("%d\n", total_time);
    }
    
    return 0;
}

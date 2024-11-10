#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int A, B, C, D;
        // Reading four space-separated integers representing the angles
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
        // Check if the sum of opposite angles is 180 degrees
        if ((A + C == 180) && (B + D == 180)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}



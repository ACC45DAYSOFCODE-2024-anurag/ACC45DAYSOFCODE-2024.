#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; // X = number of problems submitted, Y = number of problems approved
        scanf("%d %d", &X, &Y);
        
        // Check if at least 50% of submitted problems are approved
        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}



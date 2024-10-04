#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X;
        scanf("%d", &X);
        
        // Check if he starts at or before 7 pm
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
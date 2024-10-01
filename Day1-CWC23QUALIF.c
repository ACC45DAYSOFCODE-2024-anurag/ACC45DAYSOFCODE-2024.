#include <stdio.h>

int main() {
    int X;
    
    // Read the total points scored by the team
    scanf("%d", &X);
    
    // Check if the team has qualified
    if (X >= 12) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}



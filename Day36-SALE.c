#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Input the number of test cases
    
    while (T--) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);  // Input prices A, B, and C
        
        // Find the total price of the three items
        int total = A + B + C;
        
        // Find the minimum price among the three
        int min_price = A;
        if (B < min_price) min_price = B;
        if (C < min_price) min_price = C;
        
        // The amount Chef needs to pay is the total minus the minimum price
        printf("%d\n", total - min_price);
    }
    
    return 0;
}



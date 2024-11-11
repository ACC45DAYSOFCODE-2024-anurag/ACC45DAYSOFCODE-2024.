#include <stdio.h>

int main() {
    int X, Y;
    // Read the input values X and Y
    scanf("%d %d", &X, &Y);
    
    // Calculate the total time Chef spends watching the movie
    int total_time = (Y / 2) + (X - Y);
    
    // Print the result
    printf("%d\n", total_time);
    
    return 0;
}



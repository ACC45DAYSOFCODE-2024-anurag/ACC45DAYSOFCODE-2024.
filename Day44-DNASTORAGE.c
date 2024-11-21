#include <stdio.h>
#include <string.h>

// Function to encode binary string
void encodeBinaryToDNA(char *binaryString, int length) {
    for (int i = 0; i < length; i += 2) {
        // Take two characters at a time and replace based on the rules
        if (binaryString[i] == '0' && binaryString[i+1] == '0') {
            printf("A");
        } else if (binaryString[i] == '0' && binaryString[i+1] == '1') {
            printf("T");
        } else if (binaryString[i] == '1' && binaryString[i+1] == '0') {
            printf("C");
        } else if (binaryString[i] == '1' && binaryString[i+1] == '1') {
            printf("G");
        }
    }
    printf("\n");
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // Process each test case
    for (int t = 0; t < T; t++) {
        int N; // Length of binary string (not really needed for logic)
        char S[1001]; // Binary string
        
        scanf("%d", &N);
        scanf("%s", S);
        
        // Call the function to encode and print the result
        encodeBinaryToDNA(S, N);
    }
    
    return 0;
}

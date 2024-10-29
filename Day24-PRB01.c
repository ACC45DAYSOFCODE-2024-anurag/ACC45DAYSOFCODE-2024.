int is_prime(int n) {
    if (n <= 1) return 0; // 1 is not prime
    if (n <= 3) return 1; // 2 and 3 are prime

    if (n % 2 == 0 || n % 3 == 0) return 0; // Eliminate multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0; // Check divisibility
    }
    
    return 1; // Number is prime
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); // Read the number to be tested
        if (is_prime(N)) {
            printf("yes\n"); // N is prime
        } else {
            printf("no\n"); // N is not prime
        }
    }
    return 0; // Add a return statement for main
}
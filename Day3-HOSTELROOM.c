#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X; // length of array A and initial number of people
        scanf("%d %d", &N, &X);
        
        int A[N]; // array to store events
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int current_people = X; // current number of people in the room
        int max_people = X; // maximum number of people at any moment

        for (int i = 0; i < N; i++) {
            current_people += A[i]; // update current people based on the event
            if (current_people > max_people) {
                max_people = current_people; // update max if current is greater
            }
        }

        printf("%d\n", max_people); // print the result for the test case
    }

    return 0;
}

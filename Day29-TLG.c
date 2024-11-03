#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int score1 = 0, score2 = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);
        
        score1 += S;
        score2 += T;

        int lead = score1 > score2 ? score1 - score2 : score2 - score1;
        int currentWinner = score1 > score2 ? 1 : 2;

        if (lead > maxLead) {
            maxLead = lead;
            winner = currentWinner;
        }
    }

    printf("%d %d\n", winner, maxLead);
    return 0;
}



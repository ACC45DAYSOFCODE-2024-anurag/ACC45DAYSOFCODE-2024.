#include <stdio.h>

int main() {
    int T, S, X, Y, Z, apps_to_delete;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d %d", &S, &X, &Y, &Z);

        // Calculate total memory occupied by existing apps
        int total_occupied = X + Y;

        // Calculate available free space
        int free_space = S - total_occupied;

        // Determine how much additional space is needed
        int additional_space_needed = Z - free_space;

        if (additional_space_needed <= 0) {
            apps_to_delete = 0; // No need to delete any app
        } else if (additional_space_needed <= X || additional_space_needed <= Y) {
            apps_to_delete = 1; // Need to delete one app
        } else {
            apps_to_delete = 2; // Need to delete both apps
        }

        printf("%d\n", apps_to_delete);
    }

    return 0;
}

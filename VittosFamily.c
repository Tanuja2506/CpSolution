#include <stdio.h>
#include <stdlib.h>

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int houses[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &houses[i]);
        }

        int median = houses[n / 2]; 
        int distance = 0;
        for (int i = 0; i < n; i++) {
            distance += abs(houses[i] - median);
        }

        printf("\n%d", distance);
    }
    
    return 0;
}


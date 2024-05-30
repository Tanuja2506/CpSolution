#include<stdio.h>
#include<stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    const int *shoeA = (const int *)a;
    const int *shoeB = (const int *)b;
    float cpA = (float)shoeA[1] / shoeA[0];
    float cpB = (float)shoeB[1] / shoeB[0];

    if (cpA == cpB)
        return shoeA[2] - shoeB[2];
    else
        return (cpA > cpB) ? -1 : 1;
}

int main()
{
    int Case;
    scanf("%d", &Case);
    while (Case--)
    {
        int n;
        scanf("%d", &n);
        int shoe[1001][3]; // shoe[i][0] -> d, shoe[i][1] -> p, shoe[i][2] -> id
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d", &shoe[i][0], &shoe[i][1]);
            shoe[i][2] = i; // Assigning id
        }
        // Sort the array using qsort
        qsort(shoe + 1, n, sizeof(shoe[0]), compare);

        for (int i = 1; i < n; i++)
            printf("%d ", shoe[i][2]);
        printf("%d\n", shoe[n][2]);
        if (Case)
            putchar('\n');
    }

    return 0;
}

#include <stdio.h>

#define MAX_LENGTH 1000

int main() {
    char a[MAX_LENGTH], b[MAX_LENGTH];
    int found[26] = {0};

   
    printf("Enter the first string: ");
    scanf("%s", a);
    printf("Enter the second string: ");
    scanf("%s", b);

   
    for (int i = 0; a[i] != '\0'; i++) {
        for (int j = 0; b[j] != '\0'; j++) {
            if (a[i] == b[j]) {
                found[a[i] - 'a'] = 1;
                break;
            }
        }
    }
    printf("Common characters in ascending order: ");
    for (int i = 0; i < 26; i++) {
        if (found[i])
            printf("%c ", 'a' + i);
    }
    printf("\n");

    return 0;
}

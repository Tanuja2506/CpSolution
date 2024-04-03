
#include <stdio.h>
#include <string.h>

int main() {
    // Map of characters to their left neighbors on a QWERTY keyboard
    char *keys = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char input[100]; // Adjust size as necessary
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin); // Read a line of text

    // Process each character in the input
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            printf("\n"); // Handle new line separately
            continue;
        }

        // Find the character in the keys and print its left neighbor
        char *found = strchr(keys, input[i]);
        if (found != NULL && found > keys) { // Ensure it's not the first character
            printf("%c", *(found - 1)); // Print character to the left
        } else {
            // If the character is not found or is the first character, print it as is
            printf("%c", input[i]);
        }
    }

    return 0;
}

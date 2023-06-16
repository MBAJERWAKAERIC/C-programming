#include <stdio.h>

int main() {
    int i;

    // Loop through the ASCII values from 0 to 255
    for (i = 0; i < 256; i++) {
        // Print the character corresponding to the ASCII value
        printf("%d: %c\n", i, (char)i);
    }

    return 0;
}

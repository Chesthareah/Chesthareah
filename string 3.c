#include <stdio.h>

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Change characters at even indices to 'X'
    for (int i = 1; inputString[i] != '\0'; i += 2) {
        inputString[i] = 'X';
    }

    // Print the modified string
    printf("Modified string: %s\n", inputString);

    return 0;
}

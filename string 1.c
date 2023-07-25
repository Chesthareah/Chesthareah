#include <stdio.h>

int main() {
    char inputString[100]; // Assuming the user will input a string of up to 99 characters
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Change the first character to 'A'
    if (inputString[0] != '\0') {
        inputString[0] = 'A';
    }

    // Change the second character to 'B'
    if (inputString[1] != '\0') {
        inputString[1] = 'B';
    }

    // Print the modified string
    printf("Modified string: %s\n", inputString);

    return 0;
}

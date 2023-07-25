#include <stdio.h>

int main() {
    char inputString[100]; 
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Change characters at odd indices to 'x'
    for (int i = 1; inputString[i] != '\0'; i+=2) {
        if (i % 2 == 0) {
            inputString[i] = 'Z';
        }
    }

    // Print the modified string
    printf("Modified string: %s\n", inputString);

    return 0;
}

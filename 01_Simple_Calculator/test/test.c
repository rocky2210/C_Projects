#include <stdio.h>
#include <string.h>

#define RED   "\x1b[31m"
#define CYAN  "\x1b[36m"
#define RESET "\x1b[0m"

void repeatChar(char *dest, char ch, int times) {
    for (int i = 0; i < times; ++i) {
        *dest++ = ch;
    }
    *dest = '\0';  // Null-terminate the string
}

void boxOutput(const char *message, int result) {
    char resultStr[20];
    sprintf(resultStr, "%d", result);

    int boxWidth = strlen(message) + strlen(resultStr) + 4;
    char border[boxWidth + 1];

    repeatChar(border, '─', boxWidth);

    printf(RED "┌%s┐\n", border);
    printf(CYAN "│ %s %d │\n", message, result);
    printf(RED "└%s┘\n", border);

    printf(RESET);
}

int main() {
    boxOutput("Result:", 1000000);
    return 0;
}


// Overflow error 
// Bug

// WAP C Program to implement PDA to accept strings having equal number of 0s and 1s

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    char stack[100];
    int top = -1;

    system("cls");

    printf("Enter a string (0s and 1s): ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {

        if (str[i] == '0') {

            if (top >= 0 && stack[top] == '1')
                top--;              // Pop 1
            else
                stack[++top] = '0'; // Push 0

        } else if (str[i] == '1') {

            if (top >= 0 && stack[top] == '0')
                top--;              // Pop 0
            else
                stack[++top] = '1'; // Push 1

        } else {
            printf("\nInvalid input!\n");
            return 0;
        }
    }

    if (top == -1)
        printf("\nString Accepted\n");
    else
        printf("\nString Rejected\n");

    return 0;
}
// WAP C Program to implement DFA to accept decimal numbers divisible by 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    int state = 0;

    system("cls");

    printf("Enter a decimal number: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        switch (state) {
            case 0:
                if (str[i] == '0' || str[i] == '2' ||
                    str[i] == '4' || str[i] == '6' ||
                    str[i] == '8')
                    state = 1;
                else
                    state = 0;
                break;

            case 1:
                if (str[i] == '0' || str[i] == '2' ||
                    str[i] == '4' || str[i] == '6' ||
                    str[i] == '8')
                    state = 1;
                else
                    state = 0;
                break;
        }
    }

    if (state == 1)
        printf("\nString Accepted\n");
    else
        printf("\nString Rejected\n");

    return 0;
}
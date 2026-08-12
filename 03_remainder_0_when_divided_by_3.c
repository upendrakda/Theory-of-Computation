// WAP C Program to implement DFA to accept binary strings  with remainder 0 when divided by 3

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    int state = 0;

    system("cls");

    printf("Enter a binary string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        switch (state) {
            case 0:
                if (str[i] == '0')
                    state = 0;
                else
                    state = 1;
                break;

            case 1:
                if (str[i] == '0')
                    state = 2;
                else
                    state = 0;
                break;

            case 2:
                if (str[i] == '0')
                    state = 1;
                else
                    state = 2;
                break;
        }
    }

    if (state == 0)
        printf("\nString Accepted\n");
    else
        printf("\nString Rejected\n");

    return 0;
}
// WAP C Program to implement DFA to accept strings ending with 101

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[100];
    int state = 0;

    system("cls");

    printf("Enter a string(0s and 1s): ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        switch (state) {
            case 0:
                if (str[i] == '1')
                    state = 1;
                else
                    state = 0;
                break;

            case 1:
                if (str[i] == '0')
                    state = 2;
                else
                    state = 1;
                break;

            case 2:
                if (str[i] == '1')
                    state = 3;
                else
                    state = 0;
                break;

            case 3:
                if (str[i] == '1')
                    state = 1;
                else
                    state = 2;
                break;
        }
    }

    if (state == 3)
        printf("\nString Accepted\n");
    else
        printf("\nString Rejected\n");

    return 0;
}
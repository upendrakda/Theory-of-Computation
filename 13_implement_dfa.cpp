// Program to implement DFA for the language (a+aa*b)*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int table[2][2], i, j, l, status = 0, success;
    char input[100];

    system("cls");

    printf("Program for implementing DFA of language (a+aa*b)*\n");
    printf("\nEnter Input String \n");

    table[0][0] = 1;
    table[0][1] = -1;
    table[1][0] = 1;
    table[1][1] = 0;

    scanf("%s", input);

    l = strlen(input);

    for(i = 0; i < l; i++){
        if(input[i] != 'a' && input[i] != 'b'){
            printf("Value entered is wrong");
            return 0;
        }

        if(input[i] == 'a')
            status = table[status][0];
        else
            status = table[status][1];

        if(status == -1){
            printf("String not Accepted by this Language");
            break;
        }
    }

    if(i == l)
        printf("String Accepted");

    return 0;
}
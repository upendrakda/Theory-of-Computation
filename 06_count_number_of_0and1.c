// WAP C Program to implement Moore Machine to count number of 0s and 1s

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void A(char s[], int i);
void B(char s[], int i);

int z = 0;   // Count of 0s
int o = 0;   // Count of 1s

void A(char s[], int i)
{
    if (i == strlen(s))
    {
        printf("\nNo. of zeros are: %d", z);
        printf("\nNo. of ones are: %d", o);
        return;
    }

    printf("\nA -> ");

    if (s[i] == '0')
    {
        z++;
        printf("Output is y");
        A(s, i + 1);
    }
    else
    {
        o++;
        printf("Output is x");
        B(s, i + 1);
    }
}

void B(char s[], int i)
{
    if (i == strlen(s))
    {
        printf("\nNo. of zeros are: %d", z);
        printf("\nNo. of ones are: %d", o);
        return;
    }

    printf("\nB -> ");

    if (s[i] == '0')
    {
        z++;
        printf("Output is y");
        A(s, i + 1);
    }
    else
    {
        o++;
        printf("Output is x");
        B(s, i + 1);
    }
}

int main()
{
    char s[100];

    system("cls");

    printf("Enter the string (0 or 1): ");
    scanf("%s", s);

    printf("\nThe state transitions are:\n");

    A(s, 0);

    return 0;
}
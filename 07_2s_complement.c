// WAP C Program to implement Moore Machine to find 2's complement of a binary number

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void q1(char s[], int i);
void q2(char s[], int i);
void q3(char s[], int i);

int a[100];
int j = 0;

void q1(char s[], int i)
{
    if (i == strlen(s))
    {
        printf("\n2's complement of the given string is: ");

        for (j = strlen(s) - 1; j >= 0; j--)
            printf("%d", a[j]);

        return;
    }

    printf("\nq1 -> ");

    if (s[i] == '0')
    {
        printf("Output is 0");
        a[j] = 0;
        j++;

        q1(s, i + 1);
    }
    else
    {
        printf("Output is 1");
        a[j] = 1;
        j++;

        q2(s, i + 1);
    }
}

void q2(char s[], int i)
{
    if (i == strlen(s))
    {
        printf("\n2's complement of the given string is: ");

        for (j = strlen(s) - 1; j >= 0; j--)
            printf("%d", a[j]);

        return;
    }

    printf("\nq2 -> ");

    if (s[i] == '0')
    {
        printf("Output is 1");
        a[j] = 1;
        j++;

        q2(s, i + 1);
    }
    else
    {
        printf("Output is 0");
        a[j] = 0;
        j++;

        q3(s, i + 1);
    }
}

void q3(char s[], int i)
{
    if (i == strlen(s))
    {
        printf("\n2's complement of the given string is: ");

        for (j = strlen(s) - 1; j >= 0; j--)
            printf("%d", a[j]);

        return;
    }

    printf("\nq3 -> ");

    if (s[i] == '0')
    {
        printf("Output is 1");
        a[j] = 1;
        j++;

        q2(s, i + 1);
    }
    else
    {
        printf("Output is 0");
        a[j] = 0;
        j++;

        q3(s, i + 1);
    }
}

int main()
{
    char s[100];
    char rev[100];
    int len, i;

    system("cls");

    printf("Enter the string (0 or 1): ");
    scanf("%s", s);

    len = strlen(s);

    // Reverse the string
    for (i = 0; i < len; i++)
        rev[i] = s[len - 1 - i];

    rev[len] = '\0';

    printf("\nThe state transitions are:");

    q1(rev, 0);

    printf("\n");

    return 0;
}
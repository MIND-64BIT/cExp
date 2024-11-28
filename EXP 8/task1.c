/*
Exp no: 8
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find sum of two matrix.
*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]",str);

    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}

/* Output: 

Enter a string: Hello World
The length of the string is: 11

*/

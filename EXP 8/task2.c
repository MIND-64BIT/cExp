/*
Exp no: 8
Task: 2
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to check if enterd string is palindrome or not
*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    char reversed[100];
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';

    return strcmp(str, reversed) == 0;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


/* Output: 

Enter a string: madam
The string is a palindrome.

*/

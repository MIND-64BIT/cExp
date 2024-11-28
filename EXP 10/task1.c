/*
Exp no: 10
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find sum of two matrix.
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &sum;

    printf("Enter first number: ");
    scanf("%d", ptr1);
    printf("Enter second number: ");
    scanf("%d", ptr2);

    *ptr3 = *ptr1 + *ptr2;

    printf("The sum is: %d\n", sum);

    return 0;
}

/* Output: 

Enter first number: 3
Enter second number: 4
The sum is: 7

*/

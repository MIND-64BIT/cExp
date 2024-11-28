/*
Exp no: 10
Task: 2
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find sum of two matrix.
*/

#include <stdio.h>

int main() {
    int arr[5], *ptr;
    
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr + 4; 

    printf("Array in reverse order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        ptr--; 
    }

    printf("\n");

    return 0;
}


/* Output: 

Enter 5 elements:
1 2 3 4 5
Array in reverse order:
5 4 3 2 1 

*/

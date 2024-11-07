/*


Exp no: 2
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Branch: CE
Roll no: 06
Division: C
Title: WAP to print if entered number is even or odd


*/


#include<stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("\n%d is EVEN number.\n",num);
    }
    else{
        printf("\n%d is ODD number.\n",num);
    }

    return 0;
}

/* output

Enter a number: 67

67 is ODD number.

*/




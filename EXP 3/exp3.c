/*

Exp no: 3
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to design a menu driven calculator using switch and goto.

*/

#include<stdio.h>


int main(){


    float num1,num2,output;
    int op;
    char c;

repeat:
    printf("OPERATOR:\n1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Modulus\n\n");

    printf("Enter First Number : ");
    scanf("%f", &num1);

    printf("Enter Second Number : ");
    scanf("%f", &num2);

    printf("Enter Operator no: ");
    scanf(" %d", &op);

    if(num2 == 0 && op == 4){
        printf("\nCannot divide by 0");
        return 0;
    }
    else if(num2 == 0 && op == 5){
        printf("\nCannot divide by 0");
        return 0;
    }
    else{
        switch(op){

        case 1:
            output = num1 + num2;
            break;

        case 2:
            output = num1 - num2;
            break;

        case 3:
            output = num1 * num2;
            break;

        case 4:
            output = num1 / num2;
            break;

        case 5:
            output = (int)num1 % (int)num2;
            break;

        default:
            printf("\nEnter a valid Operator Number.");
            return 0;

        }
    }


    printf("Output is %f ",output);

    printf("\nDo you continue..\nType 'y': ");
    scanf("%c ",&c);
    if(c == 'y' || c == 'Y'){
        goto repeat;
    }

    return 0;
}


/*

OUTPUT:

OPERATOR:
1 Addition
2 Subtraction
3 Multiplication
4 Division
5 Modulus

Enter First Number : 7
Enter Second Number : 9
Enter Operator no: 4
Output is 0.777778
Do you continue..
Type 'y':


*/





/*

Exp no: 4
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to define a counter function to print how many times the function is called use storage classes.

*/


#include<stdio.h>


void counterFuc(){

    static int count=1;
    printf("The function is called %d times.\n",count);
    count++;
}


int main(){

    counterFuc();
    counterFuc();
    counterFuc();

return 0;
}


/*
OUTPUT:

The function is called 1 times.
The function is called 2 times.
The function is called 3 times.

*/



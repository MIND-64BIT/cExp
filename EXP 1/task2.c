/*

Exp no: 1
Task: 2
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to get students PCM marks from user and find the average
and use conditional operator to print if the student is eligible for admission or not


*/




#include<stdio.h>
int main(){

    float phy,chem,math,avg;

    printf("\nEnter Physics Marks in MHT\-CET: ");
    scanf("%f",&phy);

    printf("\nEnter Chemistry Marks in MHT\-CET: ");
    scanf("%f",&chem);

    printf("\nEnter Mathematics Marks in MHT\-CET: ");
    scanf("%f",&math);


    avg=(phy+chem+math)/3;
    printf("\n\nYour MHT\-CET marks is %f",avg);


    (avg<=50)?printf("\nYou are not eligible\n"): printf("\nYou are eligible");

return 0;
}


/* output

Enter Physics Marks in MHT-CET: 89

Enter Chemistry Marks in MHT-CET: 78

Enter Mathematics Marks in MHT-CET: 90


Your MHT-CET marks is 85.666664
You are eligible

*/


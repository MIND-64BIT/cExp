/*
Exp no: 7
Task: 2
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find sum of two matrix.
*/

#include<stdio.h>

int main(){

    int size;
    printf("Enter size of Square Matrix: ");
    scanf("%d",&size);

    int arr1[size][size], arr2[size][size], sumMatrix[size][size];

    printf("\nEnter Matrix A: \n");
    for(int i=0;i<size; i++){

        for(int j=0; j<size; j++){

            printf("Enter element a%d%d :",i+1,j+1);
            scanf("%d",&arr1[i][j]);

        }
    }

    printf("\nEnter Matrix B: \n");
    for(int i=0;i<size;i++){

        for(int j=0; j<size; j++){

            printf("Enter element a%d%d :",i+1,j+1);
            scanf("%d",&arr2[i][j]);

        }
    }

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            
            sumMatrix[i][j]=arr1[i][j]+arr2[i][j];
            
        }
    }
    
    printf("\nSum Martix of A and B is\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("a%d%d : %d\n",i+1,j+1,sumMatrix[i][j]);        
            
        }
    }

return 0;
}


/* Output:
Enter size of Square Matrix: 2

Enter Matrix A: 
Enter element a11 :2
Enter element a12 :4
Enter element a21 :5
Enter element a22 :6

Enter Matrix B: 
Enter element a11 :1
Enter element a12 :3
Enter element a21 :4
Enter element a22 :6

Sum Martix of A and B is
a11 : 3
a12 : 7
a21 : 9
a22 : 12

*/

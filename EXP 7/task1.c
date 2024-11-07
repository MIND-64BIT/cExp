
/*

Exp no: 5
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find the largest element in an array.
*/

#include<stdio.h>

int main(){

    int size, largest=0;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i < size; i++){
        printf("Enter element %d :",i+1);
        scanf("%d", &arr[i]);
    }

    for(int j=0; j < size; j++){
        if(largest<arr[j]){
            largest = arr[j];
        }
    }

    printf("The largest of the array is %d",largest);

return 0;

}

/*
OUTPUT:

Enter size of array: 5
Enter element 1 :34
Enter element 2 :67
Enter element 3 :89
Enter element 4 :23
Enter element 5 :45
The largest of the array is 89

*/


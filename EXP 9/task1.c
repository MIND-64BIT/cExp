/*
Exp no: 9
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Roll no: 06 Division: C
Title: WAP to find sum of two matrix.
*/

#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int find_topper(struct student_record students[], int n) {
    int topper_index = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }
    return topper_index;
}

int main() {
    struct student_record students[5];
    int n = 5;

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
        printf("\n");
    }

    int topper_index = find_topper(students, n);

    printf("Topper:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}


/* Output: 

Enter details for student 1
Name: raj
Roll Number: 1
Total Marks: 78

Enter details for student 2
Name: raju
Roll Number: 2
Total Marks: 79

Enter details for student 3
Name: rajesh
Roll Number: 3
Total Marks: 80

Enter details for student 4
Name: rani
Roll Number: 4
Total Marks: 81

Enter details for student 5
Name: ram
Roll Number: 5
Total Marks: 82

Topper:
Name: ram
Roll Number: 5
Total Marks: 82.00


*/

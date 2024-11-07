/*


Exp no: 2
Task: 1
Name: Prajapati Nitesh
UIN: 241P006
Branch: CE
Roll no: 06
Division: C
Title: WAP to find sum of all odd numbers between two numbers enterd by user

*/


int main(){

int start_num,end_num,sum=0;

printf("Enter START and STOP numbers: ");
scanf("%d %d",&start_num,&end_num);

for(start_num;start_num<=end_num;start_num++){

    if(start_num % 2 ==1){
        sum+=start_num;
    }
}

printf("\nThe sum is %d",sum);


return 0;
}

/*

Enter START and STOP numbers: 1 100

The sum is 2500

*/






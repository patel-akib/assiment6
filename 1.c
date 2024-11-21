/*Q.1 Calculator
Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.
Example:
Input/Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Copyright © Red & White Education Pvt. Ltd. Page 2

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 0*/


#include<stdio.h>
void sum(int x,int y){
	printf("sum of %d and %d is %d\n",x,y,x+y);
}
void sub(int x,int y){
	printf("sub of %d and %d is %d\n",x,y,x-y);
}
void mil(int x,int y){
	printf("mil of %d and %d is %d\n",x,y,x*y);
}
void div(int x,int y){
	printf("div of %d and %d is %d\n",x,y,x/y);
}
void mod(int x,int y){
	printf("mod of %d and %d is %d\n",x,y,x%y);
}
int main(){
	char c='%';
	int choice;
	do{
		printf("press 1 for +\n");
		printf("press 2 for -\n");
		printf("press 3 for *\n");
		printf("press 4 for /\n");
		printf("press 5 for %c\n");
		printf("press 0 for exit\n");
		
		printf("enter your choice:");
		scanf("%d",&choice);
		
		int num1,num2;
		printf("enter the 1st number:");
		scanf("%d",&num1);
		printf("enter the 2nd number:");
		scanf("%d",&num2);
		
		switch(choice){
			case 1:sum(num1,num2);
			break;
			
			case 2:sub(num1,num2);
			break;
			
			case 3:mil(num1,num2);
			break;
			
			case 4:div(num1,num2);
			break;
			
			case 5:mod(num1,num2);
			break;
			
			case 0:printf("you are exited:");
			break;
			
		default:printf("invalid choice:");
				
		}
	}
	while (choice!=0);
}




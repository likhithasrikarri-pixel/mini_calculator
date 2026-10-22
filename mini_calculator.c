#include<stdio.h>
int main(){
	printf("*====LIKHITHA MINI CALCULATOR====*");
	int a;
	printf("\nenter value of a:  ");
	scanf("%d",&a);
	
	int b; 
	printf("enter value of b:  ");
	scanf("%d",&b);
	
	int choice;
	printf("select operation:\n ");
	printf("1.addition  \n");
	printf("2.subtraction  \n");
	printf("3.multiplication \n");
	printf("4.division \n");
	
	scanf("%d",&choice);
	
	int c;
	switch(choice){
		case 1:
			c=a+b;
			printf("%d",c);
			break;
			
		case 2:
			c=a-b;
			printf("%d",c);
			break;
			
		case 3:
		c=a*b;
		printf("%d",c);
		break;
		
		case 4:
			if(b==0){
				printf("not defined");
			}
			else{
				c=a/b;
			printf("%d",c);
		}
			break;
			
			default:
				printf("invalid choice");
				break;		
	}
	
	return 0;	
}

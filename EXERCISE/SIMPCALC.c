#include<stdio.h>

int main()
{
	int n1, n2;
	char ch;
	printf("Enter an operator(+,-,*,/): ");
	scanf("%c", &ch);
	
	printf("Enter the first operand: ");
	scanf("%d", &n1);	
	
	printf("Enter the second operand: ");
	scanf("%d", &n2);
	
	if(ch=='+')
	printf("Sum = %d", n1+n2);
		
	if(ch=='-')
	printf("Difference = %d", n1-n2);	
	
	if(ch=='*')
	printf("Product = %d", n1*n2);	
	
	if(ch=='/')
	printf("Divide = %d", n1/n2);
	
	return 0;	
}

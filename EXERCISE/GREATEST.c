#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter the value of N1: ");
	scanf("%d", &n1);
	printf("Enter the value of N2: ");
	scanf("%d", &n2);
	printf("Enter the value of N3: ");
	scanf("%d", &n3);
	
	if(n1>n2&&n1>n3)
	printf("N1 is greatest.");
	else if(n2>n1&&n2>n3)
	printf("N2 is greatest.");
	else
	printf("N3 is greatest.");
	return 0;
}

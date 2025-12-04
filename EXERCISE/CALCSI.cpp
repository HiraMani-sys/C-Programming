#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int P, T;
	float R, A, CI;
	
	printf("Enter Principal Amount: ");
	scanf("%d",&P);
	
	printf("Enter Time: ");
	scanf("%d",&T);
	
	printf("Enter Rate: ");
	scanf("%f",&R);
	
	A = P*(pow((1+R/100),(T)));	
	CI = A - P;
	
	printf("CI = %f", CI);
	
	return 0;
}

#include<stdio.h>
#include<conio.h>

int main(){
	int n1, n2, temp;
	printf("Enter the value of n1: ");
	scanf("%d",&n1);
	printf("Enter the value of n2: ");
	scanf("%d",&n2);
	printf("Before Swapping... \n");
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("After Swapping... \n");
	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);
	return 0;
}

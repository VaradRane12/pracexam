#include <stdio.h>

int main(){
	int num , i,flag = 1;
	printf("Enter a Number: ");
	scanf("%d",&num);
	if(num ==1) printf("Number is not prime");
	for(i = 2;i<=num/2;i++)
	{
		if(num%i == 0)
		{
			printf("Number is not Prime");
			flag = 0;
			break;
		}
	}
	if(flag ==1) printf("Number is Prime");
}

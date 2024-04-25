#include <stdio.h>
int main()
{
	int basic;
	printf("Enter Your Basic Pay: ");
	scanf("%d",&basic);
	int Hra = 0.1*basic;
	int Ta = 0.05*basic;
	int gross = basic+Hra+Ta;
	int net = gross-(0.02*gross);
	printf("The Gross salary of the Employee: %d\n",gross);
	printf("Net salary of the Employee: %d",net);
}

#include<stdio.h>
int main()
{
	int i,n,j,evenSum=0,oddSum=0;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Array Elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
	{
		evenSum=evenSum+arr[i];
	}
		else
		{
			oddSum=oddSum+arr[i];
		}
	}
printf("Sum of even numbers is : %d\n",evenSum);
printf("Sum of odd numbers is : %d",oddSum);
return 0;
}

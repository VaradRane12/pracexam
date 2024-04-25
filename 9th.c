#include <stdio.h>
struct stu {
	int arr[5];
	
};
int main()
{
	struct stu s1;
	int i = 0, pass = 0, fail = 0, disct = 0,j,total = 0;
	for(i = 0;i<10;i++)
	{
		printf("Enter subject marks: ");
		for(j = 0;j<5;j++)
		{
			scanf("%d",&s1.arr[j]);
			total = total + s1.arr[j];
		}
		if((s1.arr[0]<40)||(s1.arr[1]<40)|| (s1.arr[2]<40) || (s1.arr[3]<40)|| (s1.arr[4]<40))
		{
			fail++;
		}
		else{
			pass++;
		}
		if(((s1.arr[0]+s1.arr[1]+s1.arr[2]+s1.arr[3]+s1.arr[40])/5)>75)
		{
			disct++;
		}
		
	}
	float per = (total/50);
	printf("Total percentage of the class: %f\n Total no of passing students: %d\nTotal no of Failing students: %d\nTotal no of distinctions in the class: %d\n",per,pass,fail,disct);
}

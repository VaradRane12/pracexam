#include <stdio.h>
int main(){
    int n ,arr[100],sum = 0;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Enter element no: %d\n",i+1);
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("The Sum of the elements is: %d",sum);
}
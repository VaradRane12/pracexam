#include <stdio.h>
int main(){
    int n ,arr[100];
    printf("Enter no of elements: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("Enter element no: %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++)
    {
        printf("Element no: %d >> %d\n",i+1,arr[i]);
        
    }
}
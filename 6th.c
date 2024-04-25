#include <stdio.h>
int main(){
    int n, f = 0, s = 1,t;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n%d\n",f,s);
    for(int i = 0; i<n-2;i++)
    {
        t = f+s;
        f = s;
        s = t;
        printf("%d\n",t);

    }
}
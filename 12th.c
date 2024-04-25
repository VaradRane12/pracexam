#include <stdio.h>
int factorial = 0;
int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
int main()
{
	printf("%d",multiplyNumbers(4));
}

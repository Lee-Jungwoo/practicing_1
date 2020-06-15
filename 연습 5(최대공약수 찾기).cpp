#include <stdio.h>

int main(void)
{
	int num1=8482, num2=75, factor, smaller, bigger;
	smaller = (num1 <= num2) ? num1 : num2;
	printf("%d\n",smaller);
	for(factor=smaller; (num1%factor==0)&&(num2%factor==0); factor--)\
	{
	}
	printf("%d와(과) %d의 최대공약수는 %d입니다",num1, num2, factor);
	return 0;
}

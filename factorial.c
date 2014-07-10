#include <stdio.h>

int factorial(int n)
{
if(n==0)
{
	return 1;

}else
	{
		return n*factorial(n-1);
	}

}
int main(){
	printf("El factorial de 4 es:%d",factorial(4));
	printf("\n");
	return 0;
}
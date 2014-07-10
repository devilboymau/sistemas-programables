#include <stdio.h>

int fibonacci(int n){
	if (n==1 || n==2){
		return 1;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(){
	int num=0;
	printf("Numero a obtener fibonacci:");
	scanf("%d",&num);
	printf("Resultado: %d",fibonacci(num));
	printf("\n");
	return 0;
}
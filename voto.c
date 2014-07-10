#include <stdio.h>

int main(){
	int edad;
	printf("Dame tu edad:");
	scanf("%d",&edad);
	printf("\n");
	if(edad>=18){
	 printf("Puedes votar :) \n");
	}
	else{
		 printf("No puedes votar :( \n");
	}
	return 0;
}
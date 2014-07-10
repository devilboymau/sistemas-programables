#include <stdio.h>

int main(){
	int n, f, c, e, cont=0;
printf("Ingresa numero de niveles:");
scanf("%d",&n);
cont=n-1;
	for(f=1; f<n*2; f+=2){
	   for(e=1;e<=cont;e++){
	   	printf(" ");
	   }
	   for(c=0;c<f;c++){
	   	printf("*");
	   }
	  printf("\n");	   
	  cont--;
	}
 return 0;
}
#include <stdio.h>

int main(){
	int n=5, f, c, e, cont=4;
	for(f=1; f<=n; f++){
	   for(e=1;e<=cont;e++){
	   	printf(" ");
	   }
	   for(c=1;c<=f;c++){
	   	printf("*");
	   }
	  printf("\n");	   
	  cont--;
	}
 return 0;
}
#include <stdio.h>

int main(){
	int n=1, f, c, e, cont=0;
	for(f=5; f>=n; f--){
	   for(c=f;c>=n;c--){
	   	printf("*");
	   }
	  printf("\n");
	   for(e=0;e<=cont;e++){
	   	printf(" ");
	   }
	  cont++;
	}
 return 0;
}
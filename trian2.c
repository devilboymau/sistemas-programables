#include <stdio.h>

int main(){
	int n=1, f, c;
	for(f=5; f>=n; f--){
	   for(c=f;c>=n;c--){
	   	printf("*");
	   }
	  printf("\n");
	}
 return 0;
}
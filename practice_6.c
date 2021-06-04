#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, k, l;
	for(i=4; i>=1; i--){
		k = 4 - i;
			for(l = 1; l<=k; l++){
				printf("\t");
			}
		for(j=1; j<=i; j++){
			printf("c\t");
		}
		printf("\n");
	}
}

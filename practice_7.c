#include<stdio.h>
#include<conio.h>
int main(){
	int i, j, k, l;
	for(i = 5; i>=1; i--){
		for(k = 2; k<=i; k++){
			printf("\t");
		}
		for(j = 5; j>=i; j--){
			printf("*\t");
		}
		printf("\n");
	}
	for(i=4; i>=1; i--){
		k = 4 - i;
			for(l = 0; l<=k; l++){
				printf("\t");
			}
		for(j=1; j<=i; j++){
			printf("*\t");
		}
		printf("\n");
	}
}

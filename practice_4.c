#include<stdio.h>
#include<conio.h>
int main(){
	int base, power, i;
	long int answer = 1;
	printf("Enter base and power:\n");
	scanf("%d%d",  &base, &power);
	for(i=1; i<=power; i++){
		answer = answer * base;
	}
	printf("The answer for %d^(%d) is: %ld", base, power, answer);
}

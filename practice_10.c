#include<stdio.h>
int main()
{
	int count1=0 , count2=0 , n ;
	printf("Please enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		if(n % 2 == 0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
		printf("Please enter a number: ");
		scanf("%d",&n);
	}
	printf("Number of even number : %d \n Number of odd number : %d ",count1 , count2);
}

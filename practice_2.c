#include<stdio.h>
#include<math.h>
int main() {
  printf("For 2^2+4^2+6^2+8^2+.....upto nth term''s sum:\n");
  int n,i,sum=0, powsum;
  printf("Enter the value of n : \n");
  scanf("%d", &n);
  for(i=1;i<=n;i+=1) {
    sum +=  2;
    powsum = pow(sum, 2);
  }
  printf("The sum upto %d terms is %d ", n,powsum);
  return 0;
}

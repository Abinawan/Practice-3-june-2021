#include<stdio.h>
int main() {
  printf("For 2+4+6+8.... upto nth term's sum:'\n");
  int n,i,sum=0;
  printf("Enter the value of nth term:\n  ");
  scanf("%d", &n);
  for(i=1;i<=n;i+=1) {
    sum +=  2;
  }
  printf("The sum upto %d terms is %d ", n,sum);
  return 0;
}

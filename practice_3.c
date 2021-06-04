#include<stdio.h>
#include<math.h>
int main() {
  printf("For 1 + 1/x + 1/x^2 + 1/x^3 + ...... + 1/x^n:\n");
  float x, n,i, terms, result, final ;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter n: ");
    scanf("%f", &n);
    for(i=1;i<=n;i+=1){
    terms=1/(pow(x,i));
    result += terms;}
final = 1+result;
printf("the final sum of the expression is %.2lf", final);
  return 0;
}

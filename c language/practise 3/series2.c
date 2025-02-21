#include <stdio.h>

void main()
{
    int i;
    float sum = 0, n, r;

    printf("Enter the length of the series:\n");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {  
      float fact=1;
      for (int j = 1; j <=i ; ++i);;
       {
        fact=fact*i;
       }
       sum=sum+1/fact;
    }

    printf("1 + 1/2! + 1/3! + ... + 1/%f! = %f\n", n, sum);
}

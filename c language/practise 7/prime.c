#include<stdio.h>

int prime(int n);

int prime(int n)
{
   for (int i = 2; i < n; ++i)
   {
   	 if (n % i == 0)
   	 {
   	    return 0; // Not a prime number
   	 }
   }
   return 1; // Prime number
}

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d", &n);

   if (prime(n))
   {
       printf("%d is a prime number.\n", n);
   }
   else
   {
       printf("%d is not a prime number.\n", n);
   }

   return 0;
}

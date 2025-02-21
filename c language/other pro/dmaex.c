#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  for (int i = 0; i < 3; i++)
  {
     int n;
	 char *p;
	 printf("Enter the length of employee ID %d: ", i + 1);
	 scanf("%d", &n);
	 getchar();  // Clear the newline character from the input buffer

	 p = (char *)calloc(n + 1, sizeof(char));  // Allocate memory for n characters + 1 for null terminator
	 
	 printf("Enter employee ID: ");
	 fgets(p, n + 1, stdin);  // Read input using fgets to avoid buffer overflow
	 
	 printf("%d employee ID: %s\n", i + 1, p);
	
	 free(p);
  }

  return 0;
}







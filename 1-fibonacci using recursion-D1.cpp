#include <stdio.h>
void printFibonacci(int n)
{
   int n1 = 0, n2 = 1, n3;
   
   printf("%d %d ", n1, n2); 

   for(int i=2; i<n; i++)
   {
      n3 = n1 + n2;
      printf("%d ", n3);
      n1 = n2;
      n2 = n3;
   }
}
int main()
{
   int n;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   
   printf("Fibonacci Series: ");
   printFibonacci(n);
   
   return 0;
}


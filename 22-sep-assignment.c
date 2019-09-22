#include<stdio.h>
 
void multiplication_table(int num, int limit)
{
      int i;
      for(i = 1; i <= limit; i++)
      {
            printf("%d * %d = %d\n", num, i, (num*i));
      }
}
 
int main()
{
      int num, limit;
      printf("Enter a Number:\t");
      scanf("%d", &num);
      printf("Enter the Limit:\t");
      scanf("%d", &limit);
      multiplication_table(num, limit);
      return 0;
}

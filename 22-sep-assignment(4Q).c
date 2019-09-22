#include<stdio.h>

int reverseNum(int n) {
   int r, rev = 0;

   while (n > 0) {
       r = n % 10;
       rev = rev * 10 + r;
       n = n / 10;
   }
   return rev;
}

int main() {

   int n, rev = 0;

   printf("Enter a Number :");
   scanf("%d", &n);

   rev = reverseNum(n);
   printf("\nThe Reverse Number is :%d", rev);

   return 0;
}

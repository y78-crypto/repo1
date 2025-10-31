#include <stdio.h>

int main()
{
    int a, b;
   printf("Input first integer: ");
   scanf("%d", &a);
   printf("Input second integer: ");
   scanf("%d", &b);
   
   if ((a - b) * (a - b) < 100)     //差が10未満の場合
   {
       printf("The two numbers differ by less than 10.");
   }
   
   else if ((a - b) * (a - b) > 100) //差が10より大きい場合
   {
       printf("Their difference is over 10.");
   }
   
   else                             //差がちょうど10の場合
   {
       printf("The two numbers differ by 10.");
   }
    
    return 0;
}
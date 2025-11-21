#include <stdio.h>

int main()
{
    int total = 0;
    
    for (int i=1; i <= 10; i++)
    {
        total = total + i;
    }
    printf("The sum of 1 to 10 is %d.\n", total);
    
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, D, x1, x2;
    
    printf("Input a b c of ax^2+bx+c=0 >>> ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0)
    {
        if (b == 0)
        {
            printf("The coefficient is wrong\n");   //式が c = 0　となり不適
        }
        else 
        {
            x1 = -c / b;                            //1次方程式
            printf("The solution is %g\n", x1);
        }
    }
    else                                            //2次方程式
    {
        D = b * b - 4 * a * c;              //判別式D
        if (D >= 0.0)                       //実数解あり
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);  
            if (D == 0)                     //重解
            {
                printf("The solution is a multiple solution, which is　%g\n", x1);
            }
            else
            {
                printf("The solution is %g and %g\n", x1, x2);
            }
        }
        else                                //D<0（虚数解）
        {
            printf("There is no solution because it is an imaginary solution");
        }
    }
    return 0;
}
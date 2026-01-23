#include <stdio.h>
#include <math.h>

// 二次方程式の解を表示する関数
double calc_ans(double a, double b, double c)
{
    // 二次方程式であることの確認
    if (a == 0){
        printf("Please enter a non-zero value for a.\n");
        return -1;
    }
    
    // 判別式を計算する
    double D = b*b - 4*a*c;
    
    // 判別式の符号で場合分けして、計算して解を返す
    if (D > 0){
        double x1 = (- b - sqrt(D)) / (2*a);
        double x2 = (- b + sqrt(D)) / (2*a);
        printf("The solutions are: %g, %g\n", x1, x2);

    }
    else if(D == 0){
        double x = -b / (2*a);
        printf("The solution is: %g\n", x);
        
    }
    else{
        printf("There is no real solution.\n");
        
    }
}

// main関数
int main(void)
{
    // キーボードからの入力を受け付ける
    printf("Enter the integer coefficients (a, b, c) in descending order.\n");
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    calc_ans(a, b, c);
    
    return 0;
}

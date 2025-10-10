/**コメントアウト**/

#include <stdio.h>

int main()
{
    /**aを定義して整数を代入**/
    int a = 34;
    printf("a = %d\n", a);
    
    /**aの値を更新**/
    a = a / 2;
    /**%dはint型の書式指定子**/
    printf("a = %d\n", a);

    return 0;
}
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("double maximum:%g\n", DBL_MAX);
    printf("double minimum:%g\n", DBL_MIN);
    printf("double precision:%d\n", DBL_DIG);
    printf("float maximum:%g\n", FLT_MAX);
    printf("float precision:%d\n", FLT_DIG);
    printf("long double minimum:%Le\n", LDBL_MIN);
    printf("long double precision:%d\n", LDBL_DIG);
    
    
    printf("char maximum:%d\n", CHAR_MAX);
    printf("unsigned short maximum:%u\n", USHRT_MAX);
    printf("int maximum:%d\n", INT_MAX);
    printf("long long int minimum:%lld\n", LLONG_MIN);

    return 0;
}
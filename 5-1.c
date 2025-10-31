#include <stdio.h>

int main()
{
    int diff;
    char small;
    char large;
    printf("Please enter lowercase letters: ");
    scanf("%c", &small);
    
    diff = 'a' - 'A';
    large = small - diff;	//対応する数字をlargeに格納
    printf("%c", large);	//大文字を出力
    
    return 0;
}
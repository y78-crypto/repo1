#include <stdio.h>

int main()
{
    int diff;
    char small;
    char large;
    printf("Please enter lowercase letters: ");
    scanf("%c", &small);
    
    diff = 'a' - 'A';
    large = small - diff;
    printf("%c", large);
    
    return 0;
}
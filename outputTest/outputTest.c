#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d %d", i++, i--);
    printf("\n");
    printf("%d %d %d %d %d", i, i, i++, i--, ++i);
}
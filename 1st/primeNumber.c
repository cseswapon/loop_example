/*

 #include <stdio.h> // header section ---------> header file include

int a = 10; // --------------> global variable
int b = 20; // --------------> global variable

int main() // ---------------> main function declare
{
    int sum = a + b;
    printf("%d", &sum);
    return 0;
}

// --------------> user define function

*/

#include <stdio.h>
int main()
{
    int i, j, n = 100;
    /*  printf("Enter the number till which you want prime numbers\n");
     scanf("%d", &n); */
    printf("Prime numbers are:-\n");
    for (i = 0; i <= n; i++)
    {
        int c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d ", i);
        }
    }
}
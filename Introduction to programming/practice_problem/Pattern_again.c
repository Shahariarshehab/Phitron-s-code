#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (int space = 1; space <= n - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("2 ");
        }
        else if (a[i] == 0)
        {
            printf("0 ");
        }
        else if (a[i] > 0)
        {
            printf("1 ");
        }
    }

    return 0;
}
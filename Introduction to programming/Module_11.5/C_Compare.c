#include <stdio.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);
    int val = strcmp(x, y);
    if (val < 0)
    {
        printf("%s\n", x);
    }
    else if (val == 0)
    {
        printf("%s\n", y);
    }
    else if (val > 0)
    {
        printf("%s\n", y);
    }

    return 0;
}
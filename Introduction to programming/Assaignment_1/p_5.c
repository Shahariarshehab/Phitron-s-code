#include<stdio.h>
int main()
{int N;
    scanf("%d",&N);
    if(N>1000)
    {
        printf("I will buy Punjabi\n");
        if(N>=1500 && N>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    
    else
    {
        printf("Bad luck!");
    }

    return 0;
}
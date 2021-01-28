#include <stdio.h>

void diamond (int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    diamond(n);

    return 0;
}

void diamond ( int n )
{
    int touch = 0;
    int k = n;
    int space = n - 1;
    for (int i =1; i<=n; i++)
    { 
        if (i+(i-1) < n)
        {
            for (int j = 1; j <= space; j++)
                printf(" ");
            for (int j = 1; j <= (i+(i-1)); j++)
                printf("* ");
            space -= 2;
        }
        else
        {
            
            for (int j = 1; j<= space; j++)
                printf(" ");
            for ( int j = k; j > 0; j -- )
                printf("* ");
            k -= 2;
            space += 2;
        }
        printf("\n");
    }
}

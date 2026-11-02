#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
if (n < 0)
{
    printf("Error");
}
else if (n == 0)
{
    printf("No");
}else
{
    int count = 0;

    if (n % 3 == 0)
    {
        printf("Up");
        count++;
    }

    if (n % 5 == 0)
    {
        printf("Go");
        count++;
    }

    if (n % 7 == 0)
    {
        printf("!!");
        count++;
    }

    if (count == 0)
    {
        printf("No");
    }
}
    return 0;
}

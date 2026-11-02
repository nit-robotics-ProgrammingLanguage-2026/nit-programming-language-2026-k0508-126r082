
#include <stdio.h>

void show_result(int number)
{
    if (number < 0)
    {
        printf("Error");
        return;
    }

    if (number == 0)
    {
        printf("No");
        return;
    }

    int matched = 0;

    if (number % 3 == 0)
    {
        printf("Up");
        matched++;
    }

    if (number % 5 == 0)
    {
        printf("Go");
        matched++;
    }

    if (number % 7 == 0)
    {
        printf("!!");
        matched++;
    }

    if (matched == 0)
    {
        printf("No");
    }
}

int main(void)
{
    int number;
    scanf("%d", &number);

    show_result(number);

    return 0;
}
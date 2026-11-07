//Вариант №18
#include <stdio.h>

int main()
{
    int n;
    int k1 = 0, k2 = 0;
    int sum1 = 0, sum2 = 0;
    while(scanf("%d", &n) == 1 && n != 0)
    {
        int n1 = n;
        if(n1 < 0)
        {
            n1 = -n1;
        }
        int numsum = 0;
        while(n1 > 0)
        {
            numsum += n1 % 10;
            n1 /= 10;
        }
        if(numsum != 0 && n % numsum == 0)
        {
            k1++;
            sum1 += n;
        }
        else
        {
            k2++;
            sum2 += n;
        }
    }
    printf("Кратные: %d\n", k1);
    if(k2 > 0)
    {
        printf("Среднее знач.: %.2f\n", (double)sum1 / k1);
    }
    printf("Остальные: %d\n", k2);
    if(k2 > 0)
    {
        printf("Среднее знач.: %.2f\n", (double)sum2 / k2);
    }
    return 0;
}

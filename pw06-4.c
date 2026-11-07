//Вариант №24
#include <stdio.h>

int main()
{
    double v;
    printf("Введите объем воды: ");
    if(scanf("%lf", &v) != 1 || v < 0)
    {
        printf("Число должно быть положительное!\n");
    }
    double v1 = 0, v2 = 0, v3 = 0;
    if(v <= 10)
    {
        v1 = v;
    }
    else if(v <= 30)
    {
        v1 = 10;
        v2 = v - 10;
    }
    else
    {
        v1 = 10;
        v2 = 20;
        v3 = v - 30;
    }
    double a1 = v1 * 1;
    double a2 = v2 * 2;
    double a3 = v3 * 3;
    if(v1 > 0)
    {
        printf("1 уровень: %.2lf м3 * 1 = %.2lf\n", v1, a1);
    }
    if(v2 > 0)
    {
        printf("2 уровень: %.2lf м3 * 2 = %.2lf\n", v2, a2);
    }
    if(v3 > 0)
    {
        printf("3 уровень: %.2lf м3 * 3 = %.2lf\n", v3, a3);
    }
    double sum = a1 + a2 + a3;
    printf("Итог: %.2lf\n", sum);
    return 0;
}

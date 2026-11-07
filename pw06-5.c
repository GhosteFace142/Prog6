//Вариант №28
#include <stdio.h>

int main()
{
    int num, run = 1;
    double m, v, p;
    while (run)
    {
        printf("1. Плотность(масса/объем)\n");
        printf("2. Масса(плотность*объем)\n");
        printf("3. Объем(масса/плотность)\n");
        printf("4. Удельный объем\n");
        printf("5. Выход\n");
        printf("Выберите пункт: ");
        if(scanf("%d", &num) != 1)
        {
            printf("ERROR\n");
            break;
        }
        switch (num)
        {
        case 1:
            printf("Масса: ");
            scanf("%lf", &m);
            printf("Объем: ");
            scanf("%lf", &v);
            if(v <= 0)
            {
                printf("Объем отрицательным не бывает!\n");
                break;
            }
            printf("Плотность = %.2lf\n", m / v);
            break;
        case 2:
                printf("Плотность: ");
                scanf("%lf", &p);
                printf("Объем: ");
                scanf("%lf", &v);
                printf("Масса: %.2f\n", p * v);
                break;
        case 3:
                printf("Масса: ");
                scanf("%lf", &m);
                printf("Плотность: ");
                scanf("%lf", &p);
                if(p <= 0)
                {
                    printf("Плотность должна быть больше 0\n");
                    break;
                }
                printf("Объем: %.2f\n", m / p);
                break;
        case 4:
                printf("Плотность: ");
                scanf("%lf", &p);
                if(p <= 0)
                {
                    printf("Плотность должна быть больше 0\n");
                    break;
                }
                printf("Удельный объем: %.2f\n", 1 / p);
                break;
        case 5:
                printf("Выход\n");
                run = 0;
                break;
        default:
            printf("Нет такого:)\n");
            continue;
        }
    }
    return 0;
}

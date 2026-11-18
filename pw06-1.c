//Вариант №23
#include <stdio.h>
int main()
{
    char a,b; int k = 0; a = getchar();
    while((b = getchar()) != '#')
    {
        if(a == 'i' && b == 'f')
        k++;
        a = b;
    }
    printf("%d\n", k);
    return 0;
}

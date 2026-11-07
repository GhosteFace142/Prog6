//Вариант №12
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    wchar_t a,b; int k = 0;
    while((a = getwchar()) && a != L'#')
    {
        if ((wchar_t)a < b)
        {
            b = (wchar_t)a;
            k = 1;
        }
    }
    wprintf(L"MinCode:%d (0x%X)\n", (int)b, (int)b);
    return 0;
}

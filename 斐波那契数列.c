// 斐波那契数列
#include <stdio.h>

int Fac(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return Fac(n - 1) + Fac(n - 2);
    }
}

int main()
{

    int n = 0;
    int ret = 0; 
    scanf("%d", &n);
    ret = Fac(n);
    printf("jieguoshi%d", ret);
    return 0;
}

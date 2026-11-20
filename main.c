#include <stdio.h>

/* 偶数を累積加算する関数 */
int addEvenToTotal(int evenValue)
{
    /* staticなので関数終了後も合計値を保持する */
    static int total = 0;

    total += evenValue;

    return total;
}

int main(void)
{
    int inputCount;
    int result = 0;

    scanf("%d", &inputCount);

    if (inputCount < 1 || inputCount > 10)
    {
        printf("NG");
        return 0;
    }

    for (int number = 1; number <= inputCount; number++)
    {
        result = addEvenToTotal(number * 2);
    }

    printf("%d", result);

    return 0;
}
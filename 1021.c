#include<stdio.h>

int main()
{
    double N,money,hundred,fifty,twenty,ten,five,two,oneCoins,fiftyCoins,twentyFiveCoins,tenCoins,fiveCoins,xeroOneCoins;
    scanf("%lf",&N);

    hundred = N / 100.00;
    money = fmod(N % 100.00);

    fifty = money / 50.00;
    money = money % 50.00;

    twenty = money / 20.00;
    money = money % 20.00;

    ten = money / 10.00;
    money = money % 10.00;

    five = money / 5.00;
    five = money % 5.00;

    two = money / 2.00;
    money = money % 2.00;

    oneCoins = money / 1.00;
    money = money % 1.00;

    fiftyCoins = money / 0.50;
    money = money % 0.50;

    printf("%.0f nota(s) de R$ 100.00\n"hundred);
    printf("%.0f nota(s) de R$ 50.00\n"fifty);
    printf("%.0f nota(s) de R$ 20.00\n"twenty);
    printf("%.0f nota(s) de R$ 10.00\n"ten);
    printf("%.0f nota(s) de R$ 5.00\n"five);
    printf("%.0f nota(s) de R$ 2.00\n"two);
    printf("%.0f nota(s) de R$ 1.00\n"oneCoins);
    printf("%.0f nota(s) de R$ 0.50\n"fiftyCoins);
    printf("%.0f nota(s) de R$ 0.20\n"twentyFiveCoins);

}

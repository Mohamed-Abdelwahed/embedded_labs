#include <stdio.h>
int even_odd(int num);
int biggest_num(int num1, int num2, int num3);
int sum_series(int num);
int prime_or_not(int num);
void deccimal_to_binary(int num);
void fizz_buzz(int num);
int main()
{
    printf("%d\n", even_odd(5));
    printf("%d\n", even_odd(4));
    printf("%d\n", biggest_num(7, 8, 6));
    printf("%d\n", sum_series(6));
    printf("%d\n", prime_or_not(6));
    deccimal_to_binary(5);
    fizz_buzz(15);

    return 0;
}

int even_odd(int num)
{
    return num % 2 == 0 ? 1 : 0;
}

int biggest_num(int num1, int num2, int num3)
{
    int big = num1;
    if (num2 > num1 && num2 > num3)
    {
        big = num2;
    }
    else if (num3 > num2 && num3 > num1)
    {
        big = num3;
    }

    return big;
}

int sum_series(int num)
{
    int fact = 1;
    int sum_ser = 0;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum_ser += (fact / i);
        fact = 1;
    }

    return sum_ser;
}

int prime_or_not(int num)
{

    int i = 2;
    while (i <= num / 2)
    {
        if (num % i == 0)
            return 0;
        else
            i++;
    }

    return 1;
}

void deccimal_to_binary(int num)
{
    int a[10], i;
    for (i = 0; num > 0; i++)
    {
        a[i] = num % 2;
        num = num / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void fizz_buzz(int num){
    for (int i = 1; i <= num; i++)
    {

        if (i%3 == 0 && i%5 ==0)
        {
            printf("%d fizzbuzz\n" , i);
        }else if(i%3 == 0){
            printf("%d fizz\n" , i);
        }else if(i%5 == 0){
            printf("%d buzz\n" , i);
        }else{
               printf("%d \n" , i);
        }
        
        
    }
    
}

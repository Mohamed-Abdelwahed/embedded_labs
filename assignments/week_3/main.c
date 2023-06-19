#include <stdio.h>
#include <math.h>

void perfect_number(int min, int max);

int main()
{

    //    int num, originalNum, remainder, result = 0;
    //     printf("Enter a three-digit integer: ");
    //     scanf("%d", &num);
    //     originalNum = num;

    //     while (originalNum != 0) {
    //         remainder = originalNum % 10;

    //        result += remainder * remainder * remainder;

    //        originalNum /= 10;
    //     }

    //     if (result == num)
    //         printf("%d is an Armstrong number.", num);
    //     else
    //         printf("%d is not an Armstrong number.", num);

    /*==================================================================*/
    // int num, r, sum, temp;
    // int stno, enno;

    // printf("Input starting number of range: ");
    // scanf("%d", &stno);

    // printf("Input ending number of range : ");
    // scanf("%d", &enno);

    // printf("Armstrong numbers in given range are: ");
    // for (num = stno; num <= enno; num++)
    // {
    //     temp = num;
    //     sum = 0;

    //     while (temp != 0)
    //     {
    //         r = temp % 10;
    //         temp = temp / 10;
    //         sum = sum + (r * r * r);
    //     }
    //     if (sum == num)
    //         printf("%d ", num);
    // }
    // printf("\n");

    /*=====================================================*/
    int Max, Min;
    printf("Enter the minimum and the maximum value\n");
    scanf("%d %d", &Min, &Max);
    perfect_number(Min , Max);

    return 0;
}

void perfect_number(int min, int max)
{
    int num, Sum = 0, i;

    printf("\n Perfect Number between %d and %d are\n ", min, max);
    for (num = min; num <= max; num++)
    {
        for (i = 1, Sum = 0; i < num; i++)
        {
            if (num % i == 0)
                Sum = Sum + i;
        }
        if (Sum == num)
            printf("%d \t", num);
    }
   
}
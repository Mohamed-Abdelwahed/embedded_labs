#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main()
{

    /*============================lap 1============================================*/
    int sum = 0;
    for (char i = 2; i < 99; i+=2)
    {
        
            printf("%i\n", i);
            sum += i;
       
    }
    printf("\nsum even number is : %i \n", sum);

    /*============================lap 2============================================*/

    int counter, number;
    unsigned long long fact = 1;
    printf("\nEnter a number to calcaulte factorial: ");
    scanf("%d", &number);
    for (counter = 1; counter <= number; counter++)
    {
        fact = fact * counter;
    }
    printf("\nFactorial of %d is: %llu", number, fact);

    /*============================lap 3============================================*/
    char table_number;

    do
    {
        printf("\nEnter number to print multiplication table in range \'1\' and \'9\' \n or press any number else to exite : ");
        scanf("%i", &table_number);
    } while (table_number >= 1 && table_number <= 9);
        for (int i = 1; i <= 12; i++)
        {
            printf("%i * %i = %i \n", i, table_number, i * table_number);
        }
    

    // for (int i = 1; i <= 12; i++)
    // {
    //     printf("%i * %i = %i \n", i, table_number, i * table_number);
    // }

    /*============================lap 4============================================*/

    char day_number;

    char isRepeat = 'y';
    do
    {
        printf("\nEnter number of the day : ");
        scanf(" %c", &day_number);
        switch (day_number)
        {
        case '1':
            printf("Saturday");
            break;
        case '2':
            printf("Sunday");
            break;
        case '3':
            printf("Monday");
            break;
        case '4':
            printf("Tuesday");
            break;
        case '5':
            printf("wednesday");
            break;
        case '6':
            printf("Thursday");
            break;
        case '7':
            printf("Friday");
            break;
        default:
            printf("Undefined Day!");
            break;
        }
        printf("\nDo you want to repeat ?! y ==> yes , n ==> no :");
        scanf(" %c", &isRepeat);
    } while ((isRepeat == 'y'));

    /*==================================================================*/

    // for (unsigned char i = 0; i < 255; i++)
    // {
    //     /* code */
    //     printf("%i\n" , i);
    // }

    /*============================================================================*/

    // /*initialization for the iterator*/
    // int i = 1;

    // while (i <= 10)/*condition*/
    // {
    //     printf("hello %i\n", i);
    //     /*update the iterator*/
    //     i++;
    // }

    // printf("\n=================================================\n\
    // I after the loop %i \n" , i);

    return 0;
}

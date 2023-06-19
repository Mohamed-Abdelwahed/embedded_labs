#include <stdio.h>
int main()
{

    /*====================================lab 1================================*/
    // int id;
    // printf("Enter ID : ");
    // scanf("%i", &id);
    // switch (id)
    // {
    // case 1234:
    //     printf("Hello Amr");
    //     break;
    // case 5678:
    //     printf("Hello Maha");
    //     break;
    // case 9101:
    //     printf("Hello Ahmed");
    //     break;
    // default:
    //     printf("Undefined ID!");
    //     break;
    // }
    /*====================================lab 2================================*/
    // double salary, groos_salary;
    // printf("Enter Your Salary : ");
    // scanf("%lf", &salary);
    // int status;
    // printf("Enter number according to your status : \n1 : Single\n2: Maried without kids\n3: married with kids\n");
    // scanf(" %d", &status);
    // switch (status)
    // {
    // case 1:
    //     groos_salary = 0;
    //     printf("%lf\n" , salary);
    //     printf("Your Groos salary is : %lf\%%", groos_salary);
    //     break;
    // case 2:
    //     groos_salary = salary + (.01) * salary;
    //     printf("%lf\n" , salary);
    //     printf("Your Groos salary is : %lf\%% ", groos_salary);
    //     break;
    // case 3:
    //     groos_salary = salary + (.02) * salary;
    //     printf("%lf\n" , salary);
    //     printf("Your Groos salary is : %lf \%%", groos_salary);
    //     break;
    // default:
    //     printf("Undefined Status !");
    //     break;
    // }
    /*====================================lab 3================================*/
    int number;
    printf("Enter number to check negative or posistive or zero : ");
    scanf("%i", &number);
    switch (number > 0)
    {
    case 1:
        printf("number Positive");
        break;
    case 0:
        switch (number < 0)
        {
        case 1:
            printf("number negative");
            break;
         case 0:
            printf("number is zero");
            break;
        }

        break;
    }
    // /*====================================lab 4================================*/
    // char day_number;
    // printf("Enter number to show day :");
    // scanf("%c", &day_number);
    // switch (day_number)
    // {
    // case '1':
    //     printf("Saturday");
    //     break;
    // case '2':
    //     printf("Sunday");
    //     break;
    // case '3':
    //     printf("Monday");
    //     break;
    // case '4':
    //     printf("Tuesday");
    //     break;
    // case '5':
    //     printf("wednesday");
    //     break;
    // case '6':
    //     printf("Thursday");
    //     break;
    // case '7':
    //     printf("Friday");
    //     break;
    // default:
    //     printf("Undefined Day!");
    //     break;
    // }
    /*======================================================================*/
    // float x, y;
    // char operation;
    // printf("Enter Two numbers : ");
    // scanf("%f %f", &x, &y);
    // printf("Enter operation : ");
    // scanf(" %c", &operation);
    // switch (operation)
    // {
    // case '+':
    //     printf("Result of %f %c %f = %f", x, operation, y, x + y);
    //     break;
    // case '-':
    //     printf("Result of %f %c %f = %f", x, operation, y, x - y);
    //     break;
    // case '/':
    //     printf("Result of %f %c %f = %f", x, operation, y, x / y);
    //     break;
    // case '*':
    //     printf("Result of %f %c %f = %f", x, operation, y, x * y);
    //     break;
    // case '%':
    //     printf("Result of %f %c %f = %i", x, operation, y, (int)x % (int)y);
    //     break;
    // default:
    //     printf("Enter valid operation");
    // }
    /*====================================================================================*/
    return 0;
}

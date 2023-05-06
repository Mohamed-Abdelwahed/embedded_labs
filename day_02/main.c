#include <stdio.h>
#include <stdbool.h>
int main(){
    
    short int number = 15;
    long int number_two = 20;
    float floationg_number = 2.3;
    double floating_number2 = 8789.9779;
    char character = 'a';
    long long long_number = 685786;
    bool isTrue = true;

/*===============================================================*/
    printf("variable %d with size of %d byte  \n" , number , sizeof(number));
    printf("variable %d with size of %d byte  \n" , number_two , sizeof(number_two));
    printf("variable %f with size of %d byte  \n" , floationg_number , sizeof(floationg_number));
    printf("variable %lf with size of %d byte \n" , floating_number2 , sizeof(number));
    printf("variable %c with size of %d byte  \n" , character , sizeof(character));
    printf("variable %ld with size of %d byte \n" , long_number , sizeof(long_number));
    printf("variable %d with size of %d byte  \n" , isTrue , sizeof(isTrue));
    /*===============================================================*/

    printf("Enter short ");
    scanf("%i" , &number);
    printf("Enter long ");
    scanf("%i" , &number_two);
    printf("Enter float ");
    scanf("%f" , &floationg_number);
    printf("Enter double ");
    scanf("%lf" , &floating_number2);
    printf("Enter char ");
    scanf("%c" , &character);
    printf("Enter long long ");
    scanf("%i" , &long_number);
    printf("Enter boolean ");
    scanf("%i" , &isTrue);
    /*===============================================================*/
    printf("Enter number to print its value and octal and hexa ");
    scanf("%d" , &number);
    printf("number is %d\noctal is %o\nhexa is %x\n" , number , number,number);
    /*====================================================*/

    printf("Enter charcter to print value and ascii : ");
    scanf("%c" , &character);
    printf("character is %c and its ascii is %d" , character , character);
    //=============================================================================






    
    return 0 ;
}
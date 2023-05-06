#include <stdio.h>
#define PI 3.14
int main(){

unsigned int raduis;
printf("Enter the raduis : ");
scanf("%u" , &raduis);
printf(
    "Area = %f\ncicumfernce = %f" 
    ,PI*raduis*raduis  , 2*PI*raduis
    );
//===================================================

double number1 , number2;
printf("Enter first numbers : ");
scanf("%lf" , &number1);
printf("Enter first numbers : ");
scanf("%lf" , &number2);
printf(
    "%lf * %lf = %lf\n%lf / %lf = %lf\n%lf + %lf = %lf\n%lf - %lf = %lf\n%lf \%% %lf = %lf" 
    , number1 , number2 , number1*number2,
     number1 , number2 , number1/number2,
      number1 , number2 , number1+number2,
       number1 , number2 , number1-number2,
        number1 , number2 ,(long long ) number1% (long long)number2);

        //===============================================================


int x = 5;  /*0000 0101*/
int y = 2; /*0000 0010*/
int z , k , l , m , n;
z = x&y; /*0000 0000 ==> 0*/
k = x|y; /*0000 0111 ==> 7*/
l = x>>1; /*0000 0010 ==> 2*/
m = x^y; /*0000 0111 ==> 7*/
n = x<<2; /*0001 0100 ==> 20*/
printf("Z = %i\nK = %i\nL = %i\nM = %i\nN = %i" , z,k , l ,m , n);
//==========================================================

int num1 = 6 , num2 = 2 , num3 = 5;
printf("Enter 3 numbers 6 2 5  : \n");
scanf("%i %i %i" , &num1 , &num2 , &num3);
num1 = num1 | (1<<0); /*0000 0111 ==>7*/
num2 = num2 & !(1<<1); /*0000 0000 ==> 0*/
num3 = num3 | (1<<2) ; /*0000 0101 ==> 5*/
printf("num1  = %i , num2 = %i , num3 = %i\n" , num1 , num2 , num3);
        

//============================================================================


int f_num , s_num;
printf("Enter 2 numbers : ");
scanf("%i %i" , &f_num , &s_num);
int largest = f_num > s_num ? f_num : s_num;
printf("Largest number is : %i\n" ,largest );

//==================================================

/*

===========================================================================
===========================================================================
===========================================================================
===========================================================================
===========================================================================
===========================================================================
===========================================================================
===========================================================================

*/
/*=================ASSIGNMENTS===============================*/
int number_1 , number_2;
printf("Enter Two numbers : ");
scanf("%i %i" , &number_1 , &number_2);
{
    number_1 > number_2  ? printf("The largst number is : %i\n" , number_1) : number_1 != number_2 ? printf("The largst number is : %i\n" , number_2) : printf("num1 = num2\n");
}

//===================================================================
int check_number;
printf("Enter numbeer to check even or odd : ");
scanf("%i" , &check_number);
{
    check_number %2 == 0 ?printf("number %i is EVEN\n" , check_number):printf("number %i is ODD\n" , check_number);
}

//===================================================================


    return 0;
}
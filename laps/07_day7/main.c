#include <stdio.h>
#define LINE printf("\n===================================================================================\n");

/*
============================================
Satart Function prototype
==========================================
*/
void hello_fun(int);
void avg_num(int , int , int , int ,int);
float add(float , float);
float divide(float , float);
float mul(float , float);
float sub(float , float);
int mod(int, int);

/*
=========================================
End function prototype
=========================================
*/    


/*
========================================
Start main function
========================================
*/
int main(){


/*============================================================*/
hello_fun(5);
LINE
avg_num(4 , 5, 6, 90,9);
LINE
/*============================================================*/
printf("divid %f\n" , divide(15 , 3));
LINE
printf("sub %f\n" , sub(15 , 3));
LINE
printf("mul %f\n" , mul(15 , 3));
LINE
printf("add %f\n" , add(15 , 3));
LINE
printf("mod %d\n" , mod(16 , 3));
LINE



return 0;

}

/*-----------------------------------------------------------------------*/

void hello_fun(int number){
    for (int i = 1; i <= number; i++)
    {
       printf("Hello\n");
    }  
}

/*-----------------------------------------------------------------------*/

void avg_num(int num1 , int num2 , int num3 , int num4 ,int num5){
    float avg  = (float)(num1 + num2 + num3 + num4 + num5)/(float)5;
    printf("average is : %.2f\n" , avg);
}

/*-----------------------------------------------------------------------*/
float add(float num1, float num2){
    return num1 + num2;
}
/*-----------------------------------------------------------------------*/

float divide(float num1, float num2){
    return num1/num2;
}
/*-----------------------------------------------------------------------*/

float mul(float num1, float num2){
    return num1 * num2;
}
/*-----------------------------------------------------------------------*/

float sub(float num1, float num2){
    return num1 - num2;
}
/*-----------------------------------------------------------------------*/

int mod(int num1, int num2){
    return num1%num2;
}
/*-----------------------------------------------------------------------*/





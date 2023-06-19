#include <stdio.h>
#define LINE printf("=============================================\n");


typedef struct test{
    char x:1;
    char y:4;
}test_t;

typedef union TAG_union
{
    char x;
    short sh;
    double db;
}un_test;




void main(){


// test_t  t;
// t.x = 1;
// t.y = 8;
// printf("x : %d\n" , t.x);
// printf("y : %d\n" , t.y);
// printf("size of struct = %i\n" , sizeof(t));
// LINE
//==================
printf("Size of union : %d\n" , sizeof(un_test));










}
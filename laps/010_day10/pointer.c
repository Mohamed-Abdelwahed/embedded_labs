#include <stdio.h>
#include<math.h>


void fun(int *p , int *p2 , int *p3);
int main()
{
  int num = 9 , num2=3 , num3 = 9;
  fun(&num , &num2 , &num3);
  printf("%d \n%d\n%d" , num , num2 , num3);



    
    return 0;
}

void fun(int *p , int *p2 , int *p3){

    *p*=*p; 
    *p2= *p2 * *p2 * *p2; 
    *p3 = sqrt(*p3);
    
}

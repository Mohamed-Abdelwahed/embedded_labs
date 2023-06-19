#include <stdio.h>
//what that do ???
#include <conio.h>
// =========================

int main(){
    float raduis_of_circle ;
    printf("Enter The raduis : \n");
    scanf("%f" , &raduis_of_circle);
    int x;
    printf("Enter The X : \n");
    scanf("%d" , &x);
    float area  = raduis_of_circle*raduis_of_circle*3.14; 
    float circle  = 2*raduis_of_circle*3.14;
    printf(">>>>>>>> Area  = %f\n" , area);
    printf(">>>>>>>> circle = %f\n%a" , circle);
    printf(">>>>>>>> X = %d\n" ,x);
    

    
    return 0;
}
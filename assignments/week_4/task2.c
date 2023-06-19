#include <stdio.h>
int count_ones = 0;
int count_negative = 0;
void arr_in(int *p , int size);
int main(){

    int arr[10];
    

    arr_in(arr , 10);
    printf("\nCount ones = %i\n" , count_ones );
    printf("\nCount negatives = %i\n" , count_negative );












    return 0;
}
void arr_in(int *p , int size ){
    int *ptr = &count_ones ;
    int *ptr2 = &count_negative;
    for (int i = 0; i < size; i++)
    {
        printf("Enter arr[%d] \n" , i );
        scanf("%d" , &p[i]);
        if(p[i] ==1){
            (*ptr)++;
        }

        if (p[i] < 0)
        {
          (*ptr2)++;

        }
        
    }



    
}
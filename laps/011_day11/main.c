#include <stdio.h>
void arr_addOne(int *p , int size);
int main(){




 int arr[400] = {1,2,3,4,5};
 arr_addOne(arr , 5);












    return 0;
}

void arr_addOne(int *p , int size){
    for (int i = 0; i < size; i++)
    {
        // p[i]+=1; 
        printf("%d\n" , ++p[i]);
    }
    
}
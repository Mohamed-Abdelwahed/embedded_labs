#include <stdio.h>
unsigned short rising_edge_count(unsigned char signal);
int main(){

    int arr[10] = {0,1,1,1,0,1,0 , 1 ,0};
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] == 1 && arr[i-1] == 0){
            rising_edge_count(&arr[i]);
        }
    }
    

   

    return 0;
}

unsigned short rising_edge_count(unsigned char signal){
    static char rising_count = 0;
    return ++rising_count;

    
}

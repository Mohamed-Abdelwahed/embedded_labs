#include <stdio.h>
#define MAX_ZIZE 5
#define LINE printf("\n========================================================\n");

void arr1D_scan(int arr[], int size);
void arr1D_printLaps(int arr[], int size);
void cpyArray(int arr[] , int arrcpy[] , int size);
void reverse_array(int arr[] , int size);
// void arr2D_scan(int arr[][] , int size);

int main(int argc, char const *argv[])
{
    int g[MAX_ZIZE];
    int h[MAX_ZIZE];
    // int gg[2][2][2][2];
    // printf("size of gg = %d \n", sizeof(gg));

    // for (int i = 0; i < MAX_ZIZE; i++)
    // {
    //     printf("Enter arr[%i]\n" , i);
    //     scanf("%i" , &g[i]);
    // }

    // for (int i = 0; i < MAX_ZIZE; i++)
    // {
    //     printf("g[%i] = %i  addrees = %i\n" , i ,g[i]  , &g[i]);
    // }

    /*==================================================================*/
    arr1D_scan(g, MAX_ZIZE);
    LINE
        arr1D_printLaps(g, MAX_ZIZE);
    LINE
    cpyArray(g , h , MAX_ZIZE);
    LINE
    reverse_array(h , MAX_ZIZE);

        return 0;
}

void arr1D_printLaps(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    int totalNumberOfOnes = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
        if (arr[i] == 1)
        {
            totalNumberOfOnes += 1;
        }
            /*================================================*/
        if (arr[i] > max)
        {
            max = arr[i];
        }
        /*================================================*/
        if (arr[i] < 0)
        {
            printf("arr[%i] = %i is negative \n", i, arr[i]);
        }

    }

    printf("Sum = %i \n" , sum);
    LINE
    printf("MAx number = %i \n" , max);
    LINE
    printf("MIN number = %i \n" , min);
    LINE
    printf("Total number of ones = %i \n" , totalNumberOfOnes);
}

/*=============================================================*/
void cpyArray(int arr[] , int arrcpy[] , int size){
        for (int i = 0; i < size; i++)
        {
           arrcpy[i] = arr[i];
        }
        
}
/*=============================================================*/
void reverse_array(int arr[] , int size){
    LINE
    LINE
    printf("Reversed array : \n");
    for (int i = size-1; i >= 0 ; i--)
    {
        printf("arr[%i] = %i \n" , i , arr[i] );
    }
    
}
/*=============================================================*/
void arr1D_scan(int arr[], int size)
{
    printf("enter array elememts\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%i", &arr[i]);
    }
}

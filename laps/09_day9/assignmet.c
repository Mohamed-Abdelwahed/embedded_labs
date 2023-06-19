#include<stdio.h>
void get_matrices_and_ptint(int num ,int num2);
void add_2_matrices(int arr[] ,int arr2[]);

int main(){

// get_matrices_and_ptint(3 , 4);
int arr[3][4] = {1,2,-3,4,5,6,15,8,9,8,7,6};
int arr2[3][4] = {1,2,3,4,5,6,7,8,9,8,7,6};
int sum[3][4]; 

/*=================================================================*/
// add_2_matrices(arr , arr2);
//  for (int i = 0; i < 3; ++i)
//     for (int j = 0; j < 4; ++j) {
//       sum[i][j] = arr[i][j] + arr2[i][j];
//     }

//     printf("\nSum of two matrices: \n");
//   for (int i = 0; i < 3; ++i)
//     for (int j = 0; j < 4; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == 3) {
//         printf("\n\n");
//       }
//     }
/*=================================================================*/

    // int max = arr[0][0];
    // int min = arr[0  ][0];
    //   for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j <4; j++)
    //     {
    //         if(arr[i][j] >max)
    //         max = arr[i][j];

    //         if(arr[i][j] < min)
    //            min = arr[i][j];
    //     }
    // }

    // printf("\nmin = %d\nmax = %d\n" , min , max);

    /*==============================================*/
    //  int row, col, isEqual;
    // isEqual = 1;
    // row =3;
    // col = 4;

    // for(int j=0; j<row;j++)
    // {
    //     int flag = 1;
    //     for(int i =0; i<col; i++)
    //     {
    //         if(arr[row][col] != arr2[row][col])
    //         {
    //             isEqual = 0;
    //             printf("\n marices not eqaulas \n");
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if(flag != 1)
    //     break;
    // }


/*================================================================*/
int rows, cols, rowCounter, colCounter, scalar;
    int inputMatrix[50][50];
     
    printf("Enter Rows and Columns of Matrix\n");
    scanf("%d %d", &rows, &cols);
     
    printf("Enter Matrix of size %dX%d\n", rows, cols);
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            scanf("%d", &inputMatrix[rowCounter][colCounter]);
        }
    }
     
    printf("Enter a number to multiply with matrix \n");
    scanf("%d", &scalar);
     
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            inputMatrix[rowCounter][colCounter] = inputMatrix[rowCounter][colCounter]*scalar;
        }
    }
     
    printf("Product Matrix\n");
    for(rowCounter = 0; rowCounter < rows; rowCounter++){
        for(colCounter = 0; colCounter < cols; colCounter++){
            printf("%d ", inputMatrix[rowCounter][colCounter]);
        }
        printf("\n");
    }

    return 0;
}

void get_matrices_and_ptint(int num ,int num2){
    int arr[num][num2];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <num2; j++)
        {
            printf("\nEnter arr[%d][%d] : " , i , j);
            scanf(" %d" , &arr[i][j]);
        }
    }

     for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <num2; j++)
        {
             printf("\narr[%d][%d]%d" ,i , j ,arr[i][j]);
        }
    }
    
}

// void add_2_matrices(int arr[] ,int arr2[]){
//      for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <4; j++)
//         {
//              printf("\narr[%d][%d] × arr2[%d][%d] = %d" ,i , j ,i , j , arr[i][j] + arr2[i][j]);
//         }
//     }

// }
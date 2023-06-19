#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

/**
 * ================================
*/
void get_data(student_t *ptr[] , int student_number);
void show_data(student_t *ptr[] , int student_number);
void average_highest_lowest_grade(student_t *ptr[] , int student_number);
/**
 * ================================
*/

void main(){
    student_t students_data[10]; 
    get_data(students_data , 10);
    // show_data(students_data , 2);
    average_highest_lowest_grade(students_data , 10);
    /*============================*/


}


void get_data(student_t *ptr[] , int student_number){
    student_t arr_student[student_number];
    for (int i = 0; i < student_number; i++)
    {
        ptr[i] = &arr_student[i];
        printf("\nEnter student number%d ==> name : \n" , i+1);
        scanf( "%s", &(ptr[i]->student_name));
        fflush(stdin);
        printf("\nEnter student number%d ==> degree : \n" , i+1);
        scanf("%f" , &ptr[i]->student_degree);
    }
}


void show_data(student_t *ptr[] , int student_number){
    student_t arr_student[student_number];
    for (int i = 0; i < student_number; i++)
    {
        ptr[i] = &arr_student[i];
        printf("\nstudent number%d ==> name : %s \n" , i+1 , (ptr[i]->student_name));
        printf("\nstudent number%d ==> degree :  %0.2f \n" , i+1 , ptr[i]->student_degree);
    }
}

void average_highest_lowest_grade(student_t *ptr[] , int student_number){
    student_t arr_student[student_number];
    int small = arr_student[0].student_degree;
    int big =  arr_student[0].student_degree;
    int flag_small = 0;
    int flag_big = 0;

    float total_degree = 0;

for (int i = 0; i < student_number; i++)
    {
        if((ptr[i]->student_degree) > big){
            big = (ptr[i]->student_degree);
                flag_big = i;
        }

        
        if((ptr[i]->student_degree) < small){
                small = (ptr[i]->student_degree);
                flag_small = i;
        }

        total_degree+= (ptr[i]->student_degree);
    }
    printf("\n average degree is : %.2f \n" , total_degree/(float)student_number);
    printf("\nLowest student grad : %0.2f , name : %s\n" ,  ptr[flag_small]->student_degree ,ptr[flag_small]->student_name);
    printf("\nHighest student grad : %0.2f , name : %s\n" , ptr[flag_big]->student_degree,ptr[flag_big]->student_name);
}


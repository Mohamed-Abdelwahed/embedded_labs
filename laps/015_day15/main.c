#include <stdio.h>
#include <string.h>
#include <conio.h>

#define LINE printf("\n===================================================\n")

typedef struct tag_employee
{
    char name[30];
    int id;
    float salary;

} emp_t;


// emp_t func(emp_t s){
//     s.salary *=1.1;
//     return s;
// }

emp_t func(emp_t *s){
    s->salary *=1.1;
    return *s;
}




int main()
{

    // emp_t e1 = {"Mohamed", 78, 50000};
    // emp_t e2 = {"Ahmed", 56, 5799};
    // // printf("Size of struct is %i \n" , sizeof(e1));

    // strcpy(e2.name , "Mhmoud");

    // LINE;
    // printf("e1 :================ \nname : %s\nid : %i\nsalary : %f\n",e1.name, e1.id, e1.salary);
    // LINE;

    // LINE;
    // printf("e1 :================ \nname : %s\nid : %i\nsalary : %f\n", e2.name, e2.id, e2.salary);
    // LINE;


    int a =10;
 emp_t emps[3] = {
        {"mohamed" , 12 , 56 },
        {"ahmed" , 14 , 555}, 
        {"saeed" , 55 , 567}
        };
   
for (int  i = 0; i < 3; i++)
{
    printf("\nemp[%d] : \n" , i);
    printf("name : %s , id : %d , salary : %.2f" ,emps[i].name , emps[i].id , emps[i].salary );
}


/*=============================================================================*/
//  emp_t emps = {"mohamed" , 12 , 56 };
//  printf("name : %s , id : %d , salary : %.2f" ,emps.name , emps.id , emps.salary );

/*=============================================================================*/
//  emp_t x = {"mohamed" , 12 , 56  };
//  emp_t *p = &x;
//  LINE;
//  printf("size pointer = %d\n" , sizeof(p));
//  printf("name : %s , id : %d , salary : %.2f\n" , p->name , p->id , p->salary);
//  LINE;

/*===============================================================================*/
// int arr[5] = {1,2,3,4,5};
// int *ptr = arr;
// for (int i = 0; i < 5; i++)
// {
//    printf("arr[%d] = %d\n" , i , ptr[i]);
// }
/*=============================================*/
// emp_t employees[3] = {
//     {"mohamed" , 12 , 56 },
//         {"ahmed" , 14 , 555}, 
//         {"saeed" , 55 , 567}

// };

// emp_t *p2 = employees;
// LINE;
// for (int i = 0; i < 3; i++)
// {
//     printf("\nemployee[%d] ~~~~~~~\n" , i);
//     printf("name : %s , id : %d , salary : %.2f\n" , (*(p2+i)).name , (p2+i)->id , p2[i].salary);
// }
// LINE;

// emp_t y[3] = employees;
// LINE;
// for (int i = 0; i < 3; i++)
// {
//     printf("\nemployee[%d] ~~~~~~~\n" , i);
//     printf("name : %s , id : %d , salary : %.2f\n" , y[i].name , y[i].id , y[i].salary);
// }
// LINE;


/**=======================================================*/
// emp_t m = {"Mohamed abdelwahed" , 2 , 10};
// emp_t v;
// v = func(&m);
// LINE;
//     printf("name : %s , id : %d , salary : %.2f\n" , v.name , v.id , v.salary);
//     printf("name : %s , id : %d , salary : %.2f\n" , m.name , m.id , m.salary);
// LINE;

/**=======================================================*/
    return 0;
}
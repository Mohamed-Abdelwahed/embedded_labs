#include <stdio.h>
#include<stdlib.h>
#include "singly_linkedList.h"

void main(){
   sll_t *myList = create_list();
   printf("head = %d , size = %d\n" , myList->head , myList->size);
   append_node(myList , 10);
   printf("head = %d , size = %d\n" , myList->head , myList->size);
   append_node(myList , 20);
   printf("head = %d , size = %d\n" , myList->head , myList->size);
   append_node(myList , -100);
   printf("head = %d , size = %d\n" , myList->head , myList->size);
   display_list(myList);
   free_list(myList);
}
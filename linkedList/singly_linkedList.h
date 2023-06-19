#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

typedef int data_t;

typedef struct tag_node
{
    int data;
    struct tag_node* next; 
}node_t;


typedef struct tag_singly_linkedList
{
   node_t * head;
   int size;
}sll_t;

typedef enum{
    LL_OK,
    LL_NOT_OK,
    LL_NODE_NOT_CREATED,
    LL_NODE_NOT_FOUND,
    LL_EMPTY,

}EN_LL_state_t;

/**
 * ----------------------------------------------------------------
 * CREATE Linked LIST
 * ----------------------------------------------------------------
*/
 
 sll_t * create_list();


/**
 * ----------------------------------------------------------------
 * APPEND NODE TO LNKED LIST 
 * ----------------------------------------------------------------
*/

EN_LL_state_t append_node(sll_t* list , data_t val);

/**
 * ----------------------------------------------------------------
 * CRATE NEW NODES
 * ----------------------------------------------------------------
*/
node_t * create_node(data_t val);

/**
 * ----------------------------------------------------------------
 * display linked list data
 * ----------------------------------------------------------------
*/

EN_LL_state_t display_list(sll_t* list);


/**
 * ----------------------------------------------------------------
 * free the list
 * ----------------------------------------------------------------
*/
EN_LL_state_t free_list(sll_t * list);

/**
 * ----------------------------------------------------------------
 * search in the list the list
 * ----------------------------------------------------------------
*/




#endif
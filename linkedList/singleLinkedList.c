#include <stdio.h>
#include <stdlib.h>
#include "singly_linkedList.h"

/**
 * ----------------------------------------------------------------
 * CREATE Linked LIST
 * ----------------------------------------------------------------
 */

sll_t *create_list()
{
    sll_t *list = malloc(1 * sizeof(sll_t));
    if (list == NULL)
    {
        return 0;
    }

    list->head = NULL;
    list->size = 0;

    return list;
}

/**
 * ----------------------------------------------------------------
 * APPEND NODE TO LNKED LIST
 * ----------------------------------------------------------------
 */

EN_LL_state_t append_node(sll_t *list, data_t val){
     if (list == NULL)
    {
        return LL_NOT_OK;
    }
    

    node_t * newNode = create_node(val);
    if (newNode == NULL)
    {
        return LL_NODE_NOT_CREATED;
    }

    //check if the list is empty]]
    if (list->head == NULL)
    {
        list->head = newNode;
        list->size++;
        return LL_OK;
    }
    
    node_t* current = list->head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
    list->size++;
    return LL_OK;
    
    
}

/**
 * ----------------------------------------------------------------
 * CRATE NEW NODES
 * ----------------------------------------------------------------
 */
node_t *create_node(data_t val)
{
    node_t *newNode = malloc(1 * sizeof(node_t));
    if (newNode == NULL)
    {
        return NULL;
    }
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

/**
 * ----------------------------------------------------------------
 * display linked list data
 * ----------------------------------------------------------------
 */

EN_LL_state_t display_list(sll_t *list)
{
    if (list == NULL)
    {
        return LL_NOT_OK;
    }
    if (list->head == NULL)
    {
        return LL_EMPTY;
    }
    node_t *current = list->head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return LL_OK;
}

/**
 * ----------------------------------------------------------------
 * free the list
 * ----------------------------------------------------------------
 */
EN_LL_state_t free_list(sll_t *list)
{
    if (list == NULL)
    {
        return LL_NOT_OK;
    }
    if (list->head == NULL)
    {
        return LL_EMPTY;
    }

    node_t *current = list->head;

    while (current != NULL)
    {
        list->head = list->head->next;
        free(current);
        current = list->head;
    }

    return LL_OK;
}

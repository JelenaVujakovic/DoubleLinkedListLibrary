#include "double_linked_list.h"
#include <memory.h>
#include <stdlib.h>

double_linked_list_t *get_new_double_linked_list(){
    double_linked_list_t *dll = calloc(1,sizeof(double_linked_list_t));
    dll->head = NULL;
    return dll;
}

int add_data_to_double_linked_list(double_linked_list_t *dll,void *application_data){
    if(!dll || !application_data) return -1;

    double_linked_list_node_t* dll_new_node=calloc(1,sizeof(double_linked_list_node_t));
    dll_new_node->left=NULL;
    dll_new_node->right=NULL;
    dll_new_node->data=application_data;

    //Add to the front of double linked list
    if(!dll->head){
        dll->head=dll_new_node;
        return 0;
    }
    double_linked_list_node_t* first_node=dll->head;
    dll_new_node->right=first_node;
    first_node->left=dll_new_node;
    dll->head=dll_new_node;

    return 0;

}


#ifndef double_linked_list
#define double_linked_list

typedef struct double_linked_list_node{
    void *data;
    struct double_linked_list_node *left;
    struct double_linked_list_node *right;
}double_linked_list_node_t;

typedef struct double_linked_list{
    double_linked_list_node_t *head;
}double_linked_list_t;

double_linked_list_t *get_new_double_linked_list();
int add_data_to_double_linked_list(double_linked_list_t *dll,void *application_data);

int remove_data_from_double_linked_list_by_data_pointer(double_linked_list_t *dll,void *data);
_Bool check_is_double_linked_list_empty(double_linked_list_t *dll);
void delete_double_linked_list(double_linked_list_t *dll);

#endif // double_linked_list

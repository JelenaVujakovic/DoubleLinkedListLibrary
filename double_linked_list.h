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

#endif // double_linked_list

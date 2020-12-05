#include <stdio.h>
#include <stdlib.h>
#include "double_linked_list.h"
#include <string.h>

//Application specific data structure
typedef struct student_{
    char name[32];
    double gpa;
}student_t;

static void print_student_info(student_t *student){
    printf("Name = %s \n",student->name);
    printf("Grade point average is  = %.2f \n",student->gpa);
    printf("------------------------------------------------\n");
}

static void print_student_database(double_linked_list_t *student_db){

    double_linked_list_node_t *head=student_db->head;
    student_t *data=NULL;

    while(head){
        data=head->data;
        print_student_info(data);
        head=head->right;
    }
}

int main(int argc,char **argv)
{
    student_t *student1=calloc(1,sizeof(student_t));
    strncpy(student1->name,"John",strlen("John"));
    student1->gpa=8.54;

    student_t *student2=calloc(1,sizeof(student_t));
    strncpy(student2->name,"Jason",strlen("Jason"));
    student2->gpa=9.26;

    //Create new linked list
    double_linked_list_t *student_db=get_new_double_linked_list();

    add_data_to_double_linked_list(student_db,student1);
    add_data_to_double_linked_list(student_db,student2);

    print_student_database(student_db);


    return 0;
}

//
// Created by tahsi on 7/31/2017.
//

#include <iostream>

struct node*delete_first(struct node* head_ptr){
    if(head_ptr!=NULL){
        struct node* max=head_ptr;
        head_ptr=head_ptr->next;
        free(max);
    }
    return head_ptr;
}
void delete_first(struct node**head_pointer) {
    if (*head_pointer != NULL) {
        struct node *max = *head_pointer;
        *head_pointer = (*head_pointer)->next;
        free(max);
    }
}
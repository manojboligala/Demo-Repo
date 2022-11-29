#include"list.h"

struct node *insert(struct node * head,int data)
{
    
    struct node *new = malloc(sizeof(struct node));

    new -> data = data; 
    new -> link = head;
    head = new;
    return head;
}


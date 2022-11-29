#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *insert_all(struct node * head,int data);
struct node *insert_pos(struct node * head,int data,int pos);
struct node *insert(struct node *head, int data);
void print(struct node *head);


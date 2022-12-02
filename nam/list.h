#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

extern struct node *insert_e(struct node * head,int data);
extern struct node *insert_pos(struct node * head,int data,int pos);
extern struct node *insert_b(struct node *head, int data);
extern struct node* delete_b(struct node *head);
extern struct node* delete_e(struct node* head);
extern struct node* delete_pos(struct node* head, int pos);
extern struct node* deleteAllnode(struct node * head);
extern int linearSearch(struct node * head, int key);
extern int calculateNumNode(struct node * head);
extern int midNodes(struct node* head);


extern void print(struct node *head);


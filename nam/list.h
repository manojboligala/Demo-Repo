#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *insert(struct node *head, int data);
void print(struct node *head);


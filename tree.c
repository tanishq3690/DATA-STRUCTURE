#include<stdio.h>
#include<stdlib.h>
struct node
{
 struct node *left;
 int data;
 struct node *right;
};


int main()
{
    struct node* p;                                 /* Root Node Created */
    p=(struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    struct node* p1;                                 /* p1 Node Created */
    p1=(struct node *)malloc(sizeof(struct node));
    p1->left = NULL;
    p1->right = NULL;
     p1->data = 1;

    struct node* p2;                                 /* p2 Node Created */
    p2=(struct node *)malloc(sizeof(struct node));
    p2->left = NULL;
    p2->right = NULL;
     p2->data = 4;

    //Linking the root node to its right and left children.

    p->left =p1;
    p->right =p2;

    printf("%d %d %d",p->data,p1->data,p2->data);



    return 0;
}

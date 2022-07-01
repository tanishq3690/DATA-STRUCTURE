#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 struct node *left;
 int data;
 struct node *right;
}NODE;


NODE *createbst(NODE * root)
{
    NODE *newnode,*temp,*parent;
    int i,n,num;
    printf("How many nodes :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        scanf("%d",&num);
        newnode->data=num;
        newnode->left=NULL;
        newnode->right=NULL;

        if(root==NULL)
        {
            root=newnode;
            continue;

        }

        temp=root;

        while(temp!=NULL)
        {
            parent=temp;
            if(num<temp->data)
                temp=temp->left;
            else
                temp=temp->right;
        }
        if(num < parent->data)
            parent->left = newnode;
        else
            parent->right=newnode;
    }return(root);
}

int main()
{
  NODE*root=NULL;
  root=createbst(root);
  return 0;
}




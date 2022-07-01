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



void preorder(NODE*root)
{
    NODE*temp=root;
    if(temp!=NULL)
    {
        printf("%d\t",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void inorder(NODE*root)
{
    NODE*temp=root;
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->data);
        inorder(temp->right);
    }
}
void postorder(NODE*root)
{
    NODE*temp=root;
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->data);

    }
}
void main()
{
  NODE*root=NULL;
  root=createbst(root);
  printf("Preorder Traversal");
  preorder(root);

   printf("\n\nInorder Traversal");
  inorder(root);

  printf("\n\nPostorder Traversal");
  postorder(root);
}


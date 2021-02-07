#include<stdio.h>
#include<stdlib.h>
void create();
int length();
void reverse();
void display();

struct node
{
  struct node *left,*right;
  int data;
};
struct node *head=0;
int  main()
{
  int a[50],n;
  printf("enter the size of doubly linked:");
  scanf("%d",&n);
  printf("enter the elements of list:\n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  create(a,n);
   printf("Doubly linked list is: ");
  display();
  printf("\nlength of DDL is %d\n",length());
  printf("reverse doubly linked list:\n");
  reverse();
  
  return 0;
}
void create(int a[],int n)
{
    struct node *p,*q;
  
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
  head->left=0;
   head->right=0;
    q= head;
    for(int i=1;i<n;i++)
    {
         p=(struct node*)malloc(sizeof(struct node));
         p->data=a[i];
         p->left=q;
        p->right=q->right;
        q->right=p;
        q=p;
    }
    
}
void display()
{
struct node *temp;
temp=head;
   while(temp)
   {
       printf("%d ",temp->data);
       temp=temp->right;
   }
    
}
int length()
{
    struct node *temp=head;
    int count=0;
   while(temp)
   {
      count++;
       temp=temp->right;
   } 
   return count;
}

void reverse()
{
   struct node * temp,*p; 
  p=head;
  while(p->right!=0)
    {
    p=p->right;
     }
     temp=p;
     while(temp)
{ printf("%d ",temp->data);
temp=temp->left;
}
  


}



















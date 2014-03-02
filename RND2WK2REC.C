// reversing linked list using recursion
#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
struct node *next;
};
void display(struct node * head)
{
while(head->next!=NULL)
{
printf("%d->",head->data);
head=head->next;
}
printf("%d \n",head->data);
}

void reverse(struct node ** head)
{
struct node * first;
struct node * rest;
if(head==NULL)
return;
first=*head;
rest=first->next;
if(rest==NULL)
return;
reverse(&rest);
first->next->next=first;
first->next=NULL;
*head=rest;
}

void main()

{

struct node * root=NULL;
struct node *p,*q,*n;
    int t,w,r,s;
    printf("Enter the number of elements");
    scanf("%d",&t);
    root=malloc(sizeof(struct node));
    scanf("%d",&r);
    root->data=r;
    root->next=NULL;
    q=root;
    w=0;
    while(w<t-1)
    {
	p=malloc( sizeof(struct node) );
	scanf("%d",&r);
	p->data=r;
	q->next=p;
	p->next=NULL;
	q=p;
	w++;
     }
printf("the list is :");

display(root);

reverse(&root);

printf("after reverse :");

display(root);
}
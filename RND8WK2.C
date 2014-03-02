#include<stdio.h>
#include<malloc.h>
#include <stdlib.h>
#include<conio.h>

struct node {
  int data;
  struct node *rlink;
  struct node *llink;
};

void main()
{
    struct node *first;
    struct node *p,*last,*n;
    int t,w,r,s;
    float f;
    clrscr();
    printf("Enter the number of elements\n");
    scanf("%d",&t);
    first=malloc(sizeof(struct node));
    printf("enter elements\n");
    scanf("%d",&r);
    first->data=r;
    first->llink=NULL;
    first->rlink=NULL;
    last=first;
    w=0;
    while(w<t-1)
    {
	p=malloc( sizeof(struct node) );
	scanf("%d",&r);
	p->data=r;
	last->rlink=p;
	p->llink=last;
	p->rlink=NULL;
	last=p;
	w++;
     }
     p=first;
     while(p->rlink)
     {
     printf("%d->",p->data);
     p=p->rlink;
     }
     printf("%d\nMiddle is:",p->data);
p=first;
n=last;

while(1)
{
if(p==n)
break;
else if(p->rlink==n)
break;
p=p->rlink;
n=n->llink;

}

if(p==n)
printf("%d",p->data);
else
{
printf("%d \t %d",p->data,n->data);
}
getch();
}
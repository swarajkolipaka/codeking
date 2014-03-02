#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void main()
{
	int i,n,p;
	struct node *temp,*temp1;
	int *a;
	clrscr();
	printf("enter no.of digits\n");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	printf("enter %d values\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	first=(struct node*)malloc(sizeof(struct node));
			first->data=a[0];
			first->next=NULL;
			temp=first;
	for(i=1;i<n;i++)
	{
			temp->next=(struct node *)malloc(sizeof(struct node));
			temp->next->data=a[i];
			temp->next->next=NULL;
			temp=temp->next;

	}
	temp->next=first;
	printf("enter element\n");
	scanf("%d",&p);
	if(first->data>p)
	{
		temp1=(struct node*)malloc(sizeof(struct node));
			temp1->data=p;
			temp1->next=first;
			temp->next=temp1;
			first=temp1;

	}
	else
	{
	for(temp=first;temp->next!=first;temp=temp->next)
	{
		if(temp->next->data>p)
		{
			temp1=(struct node*)malloc(sizeof(struct node));
			temp1->data=p;
			temp1->next=temp->next;
			temp->next=temp1;
			break;
		}
	}}
	for(temp=first;temp->next!=first;temp=temp->next)
	printf("%d->",temp->data);
	printf("%d",temp->data);
	getch();
}
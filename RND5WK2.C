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
	int i,n,flag=0;
	struct node *temp;
	int *a,p;
	clrscr();
	printf("enter no.of digits\n");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	printf("%d",n);
	printf("enter some values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			first=(struct node*)malloc(sizeof(struct node));
			first->data=a[i];
			first->next=NULL;
			temp=first;
		}
		else
		{
			temp->next=(struct node *)malloc(sizeof(struct node));
			temp->next->data=a[i];
			temp->next->next=NULL;
			temp=temp->next;
		}
	}
	for(temp=first;temp!=NULL;temp=temp->next)
	{
	if(temp->next==NULL)
	printf("%d",temp->data);
	 else
	printf("%d->",temp->data);
	}
	printf("enter any element to delete\n");
	scanf("%d",&p);
	if(first->data==p)
	{
		first=first->next;
		flag=1;
	}
	else
	{	for(temp=first;temp->next!=NULL;temp=temp->next)
		{
			if(temp->next->data==p)
			{
				temp->next=temp->next->next;
				flag=1;
				break;
			}
		}
	 }
	 if(flag==1)
	 {
	for(temp=first;temp!=NULL;temp=temp->next)
	{
	if(temp->next==NULL)
	printf("%d",temp->data);
	 else
	printf("%d->",temp->data);
	}}
	else
	printf("%d not found",p);
	getch();
}

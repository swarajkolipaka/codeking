#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
struct node
{
	char data;
	struct node *next;
}*first=NULL;
void main()
{
	int i,n,len;
	struct node *temp;
	char *a;
	clrscr();
	printf("enter no.of digits\n");
	scanf("%d",&n);
	a=(char*)malloc(sizeof(char)*n);
	printf("enter a number\n");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
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
	for(temp=first;temp->next!=NULL;temp=temp->next);
	temp->next=first;
	printf("%c->",first->data);
	temp=first->next;
	printf("%c->",temp->data);
	for(temp=temp->next;temp!=first->next;temp=temp->next)
	{
	printf("%c->",temp->data);
	}
	getch();
}
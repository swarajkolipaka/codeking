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
	len=strlen(a)-1;
	for(i=len;i>=0;i--)
	{
		if(i==len)
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
	printf("%c",temp->data);
	 else
	printf("%c->",temp->data);
	}
	getch();
}
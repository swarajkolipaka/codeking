#include <stdio.h>
#include <stdlib.h>
int count;
struct node
{
    int data;
    struct node *next;
};
void push(struct node ** ref, int p)
{
    struct node* temp = (struct node*) malloc(sizeof(struct node));
      temp->data  = p;
	temp->next = (*ref);
      (*ref)  = temp;
}
void printList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
	printf("%d-> ", temp->data);
	temp = temp->next;
    }
    printf("null\n");
}
void deleteN(struct node  *head, int M, int N)
{
    struct node *curr = head, *t;
    int count;
    while (curr)
    {
	for (count = 1; count<M && curr!= NULL; count++)
    curr = curr->next;
	if (curr == NULL)
	    return;
	t = curr->next;
	for (count = 1; count<=N && t!= NULL; count++)
	{
	    struct node *temp = t;
	    t = t->next;
	    free(temp);
	}
	curr->next = t;
	curr = t;
    }
}
void main()
{
    struct node* head = NULL;
    int j,i,n,m,a;
    clrscr();
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for (i=0; i<n; i++)
    {
	scanf("%d",&j);
	push(&head, j);
	count++;
    }
    printf("enter number of elements to be deleted from last\n");
    scanf("%d",&m);
	printList(head);
	a=count-m;
	deleteN(head,a,m);
		printList(head);
    getch();
}
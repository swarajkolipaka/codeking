#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
void printNthFromLast(struct node *head, int n)
{
  struct node *main_ptr = head;
  struct node *ref = head;

  int count = 0;
  if(head != NULL)
  {
     while( count < n )
     {
	if(ref == NULL)
	{
	   printf("%d is  id=greater than the no. of nodes in list", n);
	   return;
	}
	ref = ref->next;
	count++;
     }
     while(ref != NULL)
     {
	main_ptr = main_ptr->next;
	ref  = ref->next;
     }
     printf("Node no. %d from last is %d ",
	      n, main_ptr->data);
  }
}

void push(struct node** head_ref, int p)
{
  struct node* temp =
	  (struct node*) malloc(sizeof(struct node));
  temp->data  = p;
  temp->next = (*head_ref);
  (*head_ref)    = temp;
}
void main()
{
  struct node* head = NULL;
 int j,i,n,m;
    clrscr();
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for (i=0; i<n; i++)
    {
	scanf("%d",&j);
	push(&head, j);
    }
  printf("enter the position from last to print:\n");
  scanf("%d",&m);
  printNthFromLast(head,m);
  getch();
}
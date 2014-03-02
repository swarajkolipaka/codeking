/*program to find median in a singly linked list.
Here two pointers are used.
One pointer(fast pointer) moves twice,whereas second pointer(slow pointer) moves once.
By the time fast pointer reaches the end, slow pointer reaches the middle of the list.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void printMiddle(struct node *head)
{
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
    if (head!=NULL)
    {
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
	    fast_ptr = fast_ptr->next->next;
	    slow_ptr = slow_ptr->next;
	}
	printf("The middle element is [%d]\n\n", slow_ptr->data);
    }
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
	(struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct node *ptr)
{
    while (ptr != NULL)
    {
	printf("%d->", ptr->data);
	ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node* head = NULL;
    int j,i,n;
    clrscr();
    printf("enter number of elements to be stored in linked list:\n");
    scanf("%d",&n);
    printf("enter numbers:\n");
    for (i=0; i<n; i++)
    {
	scanf("%d",&j);
	push(&head, j);
    }
	printList(head);
	printMiddle(head);
    getch();
    return 0;
}
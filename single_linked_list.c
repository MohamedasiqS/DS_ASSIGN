#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}SLL;

/* This Function is used to create new node */
SLL *createnode(SLL **new_arg)
{
	*new_arg = (SLL *)malloc(sizeof(SLL));
	(*new_arg)->link = NULL;
	return *new_arg;
}

/*This function is used to insert the new node in linked list*/
void insertnode(SLL **head_arg,SLL **latest_arg,int data_arg)
{
	SLL *new = NULL;
	new = createnode(&new);
	new->data =  data_arg;
	if(*head_arg == NULL)
		*head_arg = new;
	else
		(*latest_arg)->link = new;
	*latest_arg = new;
}

/*This Function is used to add new node after nth node */
void add_node(SLL **head_arg,int pos_arg,int data)
{
	SLL *temp = *head_arg,*new_node = NULL;
	int i=1;
	while(i<pos_arg)
	{
		temp = temp->link;
		i++;
	}
	new_node = createnode(&new_node);
	new_node->data = data;
	
	new_node->link = temp->link;
	temp->link = new_node;

}
/* This Function is used to display the odd numbers in linked list */
void display_odd_no(SLL **head_arg)
{
        SLL *temp = *head_arg;
        while(temp != NULL)
        {
		if((temp->data)%2 != 0)
                printf("ODD Number in SLL :%d\n",temp->data);
                temp = temp->link;
        }
}
/* This function is used to reverse the linked list */
void reverse(SLL **head_arg)
{
	SLL *curr = *head_arg,*prev = NULL,*next = NULL;
	while(curr != NULL)
	{
		next = curr->link;
		curr->link = prev;
		prev = curr;
		curr = next;
	}
	*head_arg = prev;
}
/*This Function is used to check given linked list is circular linked list or not */
void check_CLL_Or_SLL(SLL **latest_arg)
{
	SLL *temp = *latest_arg;
	printf("Latest : %d\n",(*latest_arg)->data);
/*	while(temp != NULL)
	{
		printf("Latest : %d\n",temp->data);
		temp = temp->link;
	}*/
	if(temp->link == NULL)
		printf("This Linked List is Single Linked List\n");
	else
		printf("This Linked List is Circular Linked List\n");
}

/* This Function is used to display all data in linked list*/
void display(SLL **head_arg)
{
        SLL *temp = *head_arg;
        while(temp != NULL)
        {
                printf("Data :%d\n",temp->data);
                temp = temp->link;
        }
}

int main(void)
{
	SLL *head=NULL,*latest = NULL;
	int value,i,pos;
	for(i=1;i<=3;i++)
	{
	printf("Enter Data\n");
	scanf("%d",&value);
	insertnode(&head,&latest,value);
	}
	display(&head);

	printf("Enter node position to create new node after it\n");
	scanf("%d",&pos);
	printf("Enter data for create new node after %d node\n",pos);
	scanf("%d",&value);
	add_node(&head,pos,value);
	display(&head);

	display_odd_no(&head);
	check_CLL_Or_SLL(&latest);

	printf("Reverse Linked list\n");
	reverse(&head);
	display(&head);

//	check_CLL_Or_SLL(&latest);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}SLL;

/* This Function is used to create new node */
SLL *createnode(SLL **new_arg)
{
	*new_arg = (SLL *)malloc(sizeof(SLL));
	(*new_arg)->link = NULL;
	return *new_arg;
}

/*This function is used to insert the new node in linked list*/
void insertnode(SLL **head_arg,SLL **latest_arg,int data_arg)
{
	SLL *new = NULL;
	new = createnode(&new);
	new->data =  data_arg;
	if(*head_arg == NULL)
		*head_arg = new;
	else
		(*latest_arg)->link = new;
	*latest_arg = new;
}

/*This Function is used to add new node after nth node */
void add_node(SLL **head_arg,int pos_arg,int data)
{
	SLL *temp = *head_arg,*new_node = NULL;
	int i=1;
	while(i<pos_arg)
	{
		temp = temp->link;
		i++;
	}
	new_node = createnode(&new_node);
	new_node->data = data;
	
	new_node->link = temp->link;
	temp->link = new_node;

}
/* This Function is used to display the odd numbers in linked list */
void display_odd_no(SLL **head_arg)
{
        SLL *temp = *head_arg;
        while(temp != NULL)
        {
		if((temp->data)%2 != 0)
                printf("ODD Number in SLL :%d\n",temp->data);
                temp = temp->link;
        }
}
/* This function is used to reverse the linked list */
void reverse(SLL **head_arg)
{
	SLL *curr = *head_arg,*prev = NULL,*next = NULL;
	while(curr != NULL)
	{
		next = curr->link;
		curr->link = prev;
		prev = curr;
		curr = next;
	}
	*head_arg = prev;
}
/*This Function is used to check given linked list is circular linked list or not */
void check_CLL_Or_SLL(SLL **latest_arg)
{
	SLL *temp = *latest_arg;
	printf("Latest : %d\n",(*latest_arg)->data);
/*	while(temp != NULL)
	{
		printf("Latest : %d\n",temp->data);
		temp = temp->link;
	}*/
	if(temp->link == NULL)
		printf("This Linked List is Single Linked List\n");
	else
		printf("This Linked List is Circular Linked List\n");
}

/* This Function is used to display all data in linked list*/
void display(SLL **head_arg)
{
        SLL *temp = *head_arg;
        while(temp != NULL)
        {
                printf("Data :%d\n",temp->data);
                temp = temp->link;
        }
}

int main(void)
{
	SLL *head=NULL,*latest = NULL;
	int value,i,pos;
	for(i=1;i<=3;i++)
	{
	printf("Enter Data\n");
	scanf("%d",&value);
	insertnode(&head,&latest,value);
	}
	display(&head);

	printf("Enter node position to create new node after it\n");
	scanf("%d",&pos);
	printf("Enter data for create new node after %d node\n",pos);
	scanf("%d",&value);
	add_node(&head,pos,value);
	display(&head);

	display_odd_no(&head);
	check_CLL_Or_SLL(&latest);

	printf("Reverse Linked list\n");
	reverse(&head);
	display(&head);

//	check_CLL_Or_SLL(&latest);
	return 0;
}

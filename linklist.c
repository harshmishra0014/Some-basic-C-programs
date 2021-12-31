//Single Linked List Insertion, Deletion and Display Operations
#include<stdio.h>
#include<stdlib.h>

//Defining self-referential structure
struct node      		
{
	int no;			//store data
	struct node *next;	//self-referential element
};

//global structure variable or node
struct node *first=0;	        

//Variable used to track the number of nodes in the list
int node_count=0;

//Function to display the contents of the linked list
void display()
{
	struct node *ptr;
	if(first==0)
		printf("List is Empty\n");
	else
	{
		for(ptr=first; ptr!=0; ptr=ptr->next)	//Traverse the List
			printf("%d -> ", ptr->no);
		printf("End\n");
	}
}

//Function to create a new list of nodes 
void create()
{
	int data;
	int choice=1;

	//new block (new) & temporary block (ptr) used for traversal
	struct node *ptr, *new;

	while (choice==1)
	{
		++node_count;
		
		//DMA for new block
		new = (struct node*)malloc(sizeof(struct node));
		printf("Address allocated for new node: %p\n", new);

		printf("Enter data: ");
		scanf("%d", &data);

		//Store data & address in the new block
		new->no = data;
		new->next =0;
		printf("Base Address: %p has data: %d, address: %p\n\n", new, new->no, new->next);

		if(first==0)  				//list is empty
			first = new;			//Store the address of first block for traversal
		else 		
		{
			for(ptr=first; ptr->next!=0; ptr=ptr->next); 	//List traversal
			ptr->next =  new;  				//Link new node to end of list
		}
		printf("Press 1 to add another element into the list: ");	//Add more nodes to the list
		scanf("%d", &choice);
	}
}

//Function to insert a node to the end of the Existing Linked List
void insertend()
{
	int data;
	struct node *ptr, *new;

	if(first==0)							//list is empty
	{
		printf("List does not exist. Create a list and then try again\n");
	}
	else
	{
		++node_count;
		
		//DMA for new block
		new = (struct node*)malloc(sizeof(struct node));
		printf("Address allocated for new node: %p\n", new);
	
		printf("Enter data to Insert at End: ");
		scanf("%d", &data);

		//Store data & address in the new block
		new->no = data;
		new->next = 0;
		printf("Base Address: %p has data: %d, address: %p\n", new, new->no, new->next);

		for(ptr=first; ptr->next!=0; ptr=ptr->next); 		//list traversal
		ptr->next =  new;					//connect new node to end of list
	}
}

//Function to insert a node to the beginning of the Existing Linked List
void insertbeg()
{
	int data;
	struct node *ptr, *new, *temp;

	if(first==0)							//list is empty
	{
		printf("List doees not exist. Create a list and then try again\n");
	}
	else							      //connect new node to beginning of list
	{
		++node_count;
	
		//DMA for new block
		new = (struct node*)malloc(sizeof(struct node));
		printf("Address allocated for new node: %p\n", new);

		printf("Enter data to Insert at Beginning: ");
		scanf("%d", &data);

		//Store data in the new block
		new->no = data;
	
		//Store address of new first block for traversal
		temp=first;
		first=new;
		new->next=temp;

		printf("Base Address: %p has Node data: %d, Node address: %p\n", new, new->no, new->next);	
	}
}

//Function to insert a node to the middle of the Existing Linked List
void insertmid()
{
	int data, pos, i=1;
	struct node *ptr, *new, *temp;

	if(first==0)	
		printf("List does not Exist. Create a List and then try again\n");
	else
	{
		printf("Enter the position to insert: ");
		scanf("%d", &pos);
	
		if(pos<=1) 
			printf("Cannot insert\n");
		else	
		{
			ptr=first;

			//traverse the list to the given position
			while(i < pos-1)
			{
				ptr=ptr->next; 	
				i++;
			}

			if(ptr->next==0)					//traversed to end-of list
				printf("Cannot insert at End of list\n");
			else						//traversed to a node in middle of list
			{
				++node_count;
	
				//DMA for new block
				new = (struct node*)malloc(sizeof(struct node));
				printf("Address allocated for new node: %p\n", new);

				printf("Enter data to Insert in Middle: ");
				scanf("%d", &data);

				//Store data & address in the new block
				new->no = data;
				new->next = 0;
			printf("Base Address: %p has data: %d, address: %p\n", new, new->no, new->next);

				//Swap the address & Link new node
				temp=ptr->next;		
				ptr->next=new;
				new->next=temp;
			}
		}
	}	
}

//Function to delete a node from the end of list
void deleteend()
{
	struct node *ptr;	
	ptr=first;

	if(ptr==0)		
		printf("List Empty\n");
	else if(ptr->next==0)			//List has one node
	{	
		printf("Node at %p with data= %d is deleted\n", ptr, ptr->no);

		first=0;			//List is Empty now
		node_count=0;	
	}
	else
	{
		//traverse the list
		for(ptr=first; ptr->next->next!=0; ptr=ptr->next);  		          
		printf("Node at %p with data= %d is deleted\n", ptr->next, ptr->next->no);
		ptr->next =  0;
		--node_count;
	}
}

//Function to delete a node from the beginning of list
void deletebeg()
{
	struct node *ptr;
	ptr=first;

	if(ptr==0)
		printf("List Empty\n");
	else if(ptr->next==0)			//List has one node
	{
		printf("First Node at %p with data= %d is deleted\n", ptr, ptr->no);
		first=0;
		node_count=0;
	}
	else
	{
		printf("First Node at %p with data= %d is deleted\n", ptr, ptr->no);
		first=ptr->next;
		--node_count;
	}
}

//Function to delete a node from the middle of the list
void deletemid()
{
	int pos, i=1;
	struct node *ptr;

	if(first==0)
		printf("List Empty\n");
	else
	{
		printf("Enter the position: ");
		scanf("%d", &pos);
	
		if(pos<=1 || pos>node_count)
			printf("Cannot delete\n");
		else if(pos>1 && pos<node_count)
		{
			ptr=first;

			//traverse the list to the given position
			while(i<pos-1)
			{
				ptr=ptr->next; 	
				i++;
			}
			//traversed to end-of list
			if(ptr->next->next==0)
				printf("Cannot delete from end of list\n");
			else
			{
				printf("Node at %p with data= %d is deleted\n", ptr->next, ptr->next->no);
				ptr->next=ptr->next->next;
				--node_count;
			}
		}
	}
}

//main function
int main()
{
	int option;
	while(1)
	{
		printf("1. Create a new List with few nodes or add nodes to end of an existing List\n");
		printf("2. Insert one node at End-of Linked List\n");
		printf("3. Insert one node at Beginning-of Linked List\n");
		printf("4. Insert one node at Middle-of Linked List\n");
		printf("5. Delete one node from End-of Linked List\n");
		printf("6. Delete one node from Beginning-of Linked List\n");
		printf("7. Delete one node from Middle-of Linked List\n");
		printf("8. Display the Single Linked List\n");
		printf("9. Stop the Program\n\n");

		printf("Enter your Choice: ");
		scanf("%d", &option);

		switch(option)
		{
			case 1:	create(); 
				printf("Node Count: %d\n\n", node_count);
				break;
			case 2:	insertend();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 3:	insertbeg();
				printf("Node Count: %d\n\n", node_count);			
				break;
			case 4:	insertmid();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 5:	deleteend();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 6:	deletebeg();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 7:	deletemid();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 8:	display();
				printf("Node Count: %d\n\n", node_count);
				break;
			case 9:	printf("Ending the Program...\n\n");
				exit(0);
			default:
				printf("Wrong choice...\n");
		}
	}
	return 0;
}

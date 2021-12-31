# include<stdio.h>  
# include<malloc.h>  
  
typedef struct node  
    {  
    int priority;  
    int data;  
    struct node *next;  
}NODE;  
NODE *front = NULL;  
  
// insert method  
void insert(int data,int priority)  
{  
    NODE *temp,*q;  
  
    temp = (NODE *)malloc(sizeof(NODE));  
    temp->data = data;  
    temp->priority = priority;  
    // condition to check whether the first element is empty or the element to be inserted has more priority than the first element  
    if( front == NULL || priority < front->priority )  
    {  
        temp->next = front;  
        front = temp;  
    }  
    else  
    {  
        q = front;  
        while( q->next != NULL && q->next->priority <= priority )  
            q=q->next;  
        temp->next = q->next;  
        q->next = temp;  
    }  
}  
  
// delete method  
  
void del()  
{  
    NODE *temp;  
        // condition to check whether the Queue is empty or not  
    if(front == NULL)  
        printf("Queue Underflow\n");  
    else  
    {  
        temp = front;  
        printf("Deleted item is %d\n", temp->data);  
        front = front->next;  
        free(temp);  
    } 
}
  
// display method  
void display()  
{  
    NODE *ptr;  
    ptr = front;  
    if(front == NULL)  
        printf("Queue is empty\n");  
    else  
    {     
        printf("Queue is :\n");  
        printf("Priority       Item\n");  
        while(ptr != NULL)  
        {  
            printf("%5d        %5d\n",ptr->priority,ptr->data);  
            ptr = ptr->next;  
        }  
    }  
}  
/*End of display*/  
  
// main method  
int main()  
{  
    int choice, data, priority;  
    do  
    {  
        printf("1.Insert\n");  
        printf("2.Delete\n");  
        printf("3.Display\n");  
        printf("4.Quit\n");  
        printf("Enter your choice : ");  
        scanf("%d", &choice);  
        switch(choice)  
        {  
            case 1:  
                printf("Enter the data which is to be added in the queue : ");  
                scanf("%d",&data);  
                printf("Enter its priority : ");  
                scanf("%d",&priority);  
                insert(data,priority);  
                break;  
            case 2:  
                del();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:  
            break;  
                default :  
                printf("Wrong choice\n");  
        }  
    }while(choice!=4);  
  
    return 0;  
}  

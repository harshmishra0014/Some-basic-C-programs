#include<stdio.h>
int top=-1;
int arr[10];
void push()
    {
        printf("Enter element to insert\n");
        int ele;
        scanf("%d",&ele);
        if(top==9)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            top+=1;
            arr[top]=ele;
            printf("Element Inserted\n");
	 }
    }
   void pop()
    {
        if(top==-1)
        {
            printf("UNDERFLOW\n");
        }
        else
        {
            printf("%d id deleted\n",arr[top]);
            top--;
        }
    }
    void display()
    {
        int i;
        if(top==-1)
        {
            printf("UNDERFLOW\n");
        }
        else
        {
            for(i=0;i<=top;i++)
            printf("%d --->",arr[i]);
	    printf("\n");
        }
    }
    void main()
    {
        int i=1;
        int choice;
        while(i==1)
        {
        printf("MENU\n");
        printf("Press 1 to insert a value\n");
        printf("Press 2 to delete a value\n");
        printf("Press 3 to display values\n");
	printf("Press 4 to exit\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        if(choice==1)
            push();
        else if(choice==2)
            pop();
        else if(choice==3)
            display();
        else if(choice==4)
            i=0;
        else
            printf("INVALID CHOICE\n");
        }
    }

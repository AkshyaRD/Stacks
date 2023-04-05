/* Stacks
Perfrom Push, Pop operation on Stack*/

#include <stdio.h>

// Function Declaration
void push(int);
void pop();
void display();

int stk[10];
int top=-1;
int data;

int main()
{
	int choice;
	do
	{
		printf("\nPerform operations on Stack \n");
		printf("1. Push the element \n2. Pop the element \n3. Display \n4. End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\nEnter the element to be added onto the stack: ");
			scanf("%d",&data);
			push(data);
		}
		else if(choice==2)
		{
			pop();
		}
		else if(choice==3)
		{
			display();
		}
		else if(choice==4)
		{
			break;
		}
		else
		{
			printf("Invalid input");
		}
		
	}while(choice!=0);
}

// Function Declaration

void push(int data)
{
	if(top==9)
	{
		printf("Stack overflow");
	}
	else
	{
		top=top+1;
		stk[top]=data;
		printf("Stack Updated!\n");
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack Underflow");
	}
	else
	{
		top=top-1;
		printf("Element has been popped!\n");
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("\nElements present in the Stack:");
		for(i=top;i>=0;i--)
		{
			printf("\n %d",stk[i]);
		}
	}
}


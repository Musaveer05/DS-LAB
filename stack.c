#include<stdio.h>

int stack[5], choice, n,top, i, x;
void push(void);
void pop(void);
void display(void);
void peek(void);

int main(){
    top = -1;
    printf("Enter the size of Stack less than 5\n");
    scanf("%d", &n);

    do
    {
        printf("Enter your choice \n 1.Push \n 2.Pop \n 3.Peek \n 4.display\n 5.Exit \n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exit\n");
            break;            
        default:
            printf("Invalid Choice");
            break;
        }
    } while (choice != 5);
    
}
void push()
{
    if (top >= n-1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        printf("Enter a value to push\n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
    
}
void pop()
{
    if (top <= -1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("The poped element is %d \n", stack[top]);
        top--;
    }
    
}
void peek()
{
    printf("The top most element is %d", stack[top]);
}
void display()
{
    if (top >= 0)
    {
        printf("\n The element in stack \n");
        for ( i = top; i >= 0; i--)
        {
            /* code */printf("\n %d", stack[i]);
            printf("\n Press Next Choice");
        }
        
    }
    else
        {
            printf("\n The STACK is empty");
        }
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int arr[5];

void push(int *top)
{
    int item;
   if (*top>=4)
   {
       printf("\nStack Overflow");
   }
   else
   {
       *top=*top+1;
       printf("\nEnter value to push = ");
       scanf("%d",&item);
       arr[*top]=item;
   }
}

void pop(int *top)
{
    if(*top<0)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nPoped Element = %d",arr[*top]);
        *top=*top-1;
    }
}

void display(int top)
{
    if (top<0)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nElements in list =");
    for (int i=top;i>=0;i--)
    {
        printf("\t%d",arr[i]);
    }
    }
}

int main()
{
    int ch,top=-1;
    do

    {
        system("cls");
        printf("\nWelcome to the program of Stack\n");
        printf("\nOperation          input");
        printf("\nPush                 1");
        printf("\nPop                  2");
        printf("\nDisplay              3");
        printf("\nExit                 4");
        printf("\n\nEnter your choice = ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                    push(&top);
                    break;

            case 2:
                    pop(&top);
                    break;

            case 3:
                    display(top);
                    break;

            case 4:
                    ch=4;
                    break;

            default:
                    printf("\nInvalid Input");
                    break;
        }
        
        printf("\nPress any button to continue");
        getch();
    }
    while(ch!=4);
}

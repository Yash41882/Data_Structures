#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int queue[5];

int menu()
{
    int ch;
    printf("\n  -------------------------");
    printf("\n | MENU - Queue Operations |\n");
    printf("\n |  Add an Item         1  |");
    printf("\n |  Delete an Item      2  |");
    printf("\n |  Display Queue       3  |");
    printf("\n |  Quit                4  |");
    printf("\n  -------------------------");
    printf("\n  Enter your choice = ");
    scanf("%d",&ch);
    return (ch);
}


void display(int front, int rear)
{
    int i;
    if (rear == - 1 || front>rear)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\t");
    }
}

void del(int *front,int *rear)
{
    int item;
    if (*rear == -1 || *front > *rear)
    {
        printf("Queue is in Underflow condition\n");
        return ;
    }
    else
    {

        printf("Element deleted from queue is : %d\n", queue[*front]);
        *front = *front + 1;
    }
}

void insert(int *front, int *rear,int n)
{
    int item;
    if (*rear == 4)
    printf("Queue is in Overflow condition\n");
    else
    {
        if (*front == - 1)
        {
            *front = 0;
        }
        printf("Inset the element in queue : ");
        scanf("%d", &item);
        *rear=*rear+1;
        queue[*rear] = item;
    }
}

int main()
{
    int ch;
    int n;
    int rear = - 1;
    int front = - 1;

    do
    {
        system("cls");
        ch=menu();

        switch (ch)
        {
            case 1:
               insert(&front,&rear,n);
               break;
            case 2:
               del(&front,&rear);
               break;
            case 3:
               display(front,rear);
               break;
            case 4:
               exit(1);
            default:
               printf("Invalid choice \n");
               break;
        }
        getch();
    }
        while(ch!=4);
   return 0;
}





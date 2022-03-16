// Checking whether a number is a Palindrome Using Stack

#include<iostream>
#include<math.h>
using namespace std;

// Declaring the stack globally
int arr[4];

// Stack functions

// Inserting the value in stack
void push(int *top, int value)
{
   if (*top>=4)
   {
       printf("\nStack Overflow");
   }
   else
   {
       *top=*top+1;
       arr[*top]=value;
   }
}


// Removing the top element from the stack
int pop(int *top)
{
    int value;
    if(*top<0)
    {
        printf("\nStack Underflow");
    }
    else
    {
        value = arr[*top];
        *top=*top-1;
    }
    return value;
}


int main()
{
    int num, digit, top = -1, rev = 0;
    printf("\nEnter a 4 digit number = ");
    scanf("%d",&num);

    int original_num = num;

    while(num > 0)
    {
        // Separating the digits from number
        digit = num % 10;
        num = num/10;
        // Inserting value in stack
        push(&top, digit);
        printf("\n digits = %d", digit);
    }


    for(int i = 0; i < 4 ; i++)
        {
            // Removing top value from stack
            digit = pop(&top);
            // getting back the reverse number
            rev = digit* pow(10,i) + rev;
        }

    printf("\nReverse = %d",rev);

    // Checking if the number and reverse number are same.
    if(original_num == rev)
    {
        printf("\nThis is a palindrome.");
    }
    else
    {
        printf("\nThis is not a palindrome.");
    }
    return 0;
}

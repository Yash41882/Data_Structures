#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring a stack using STL Library
    // Syntax -  stack <data_type> name_of_stack
    stack <int> stack;

    // Pushing or Inserting the values in Stack
    stack.push(10);
    stack.push(-9);
    stack.push(33);
    stack.push(-104);
    stack.push(55);
    stack.push(-36);
    stack.push(24);
    stack.push(99);

    // Declaring a deque (Double Ended Queue) using STL Library
    // Syntax -  deque <data_type> name_of_deque
    deque <int> deque;

    // While loop will execute till stack is empty
    while (!stack.empty()) 
    {
        // Storing the last inserted or top value of stack
        int value = stack.top();
        // Removing the last inserted or top value of stack
        stack.pop();

        // Checking if the value is negative
        if (value < 0)
        {
            // if negative then push the value at back of the deque
            deque.push_back(value);
        }

        // if value is not negative
        else
        {
            // Push the value at front of the deque
            deque.push_front(value);
        }

    }

    // Now we have a sorted queue that contains negative values at
    // back and positive value as front.

    // inserting the values back in the stack
    // starting the loop from back of the queue
    // so that negative values comes at last of stack
    for (int i = deque.size() - 1; i >= 0; i--) 
    {
        // pushing the values back in stack
        stack.push(deque[i]);
    }

    // Printing the values of the stack to verify
    cout<<"\nElements in stack : top -> ";
    
    // while loop will execute till the stack is empty
    while (!stack.empty()) 
    {
        // printing the value
        cout << stack.top() << "  ";
        // poping or removing the last inserted element from stack
        stack.pop();
    }

    return 0;

}

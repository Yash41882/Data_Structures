// Using Kadane's Algorith (Time Complexity = N)
// In this case the the rsult is get in a linear interation

#include<iostream>
using namespace std;

int Print_Array(int arr[], int n)
{
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<endl;
    return 0;
}

int Input_Array(int arr[], int n)
{
    cout<<"\nEnter the Elements in Array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return 0;
}


int Largest_SubArray_Sum3(int arr[], int n)
{
    int Largest_Sum = INT_MIN;
    int Current_Sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        Current_Sum = Current_Sum + arr[i];
        if(Current_Sum < 0)
        {
            Current_Sum = 0;
        }
        if(Current_Sum > Largest_Sum)
            {
                Largest_Sum = Current_Sum;
            }
    }

    return Largest_Sum;
}


int main()
{
    system("CLS");
    int n;
    cout<<"\nEnter the size of Array = ";
    cin>>n;
    int arr[n];

    Input_Array(arr,n);

    Print_Array(arr,n);

    cout<<"\nLargest Sub Array Sum is = "<<Largest_SubArray_Sum3(arr,n);

    return 0;
}

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

int Largest_SubArray_Sum(int arr[], int n)
{
    int Largest_Sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int SubArray_Sum = 0;
            for(int k = i; k <= j; k++)
            {
                SubArray_Sum += arr[k] ;
            }
            if(SubArray_Sum > Largest_Sum)
            {
                Largest_Sum = SubArray_Sum;
            }
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

    cout<<"\nLargest Sub Array Sum is = "<<Largest_SubArray_Sum(arr,n);

    return 0;
}

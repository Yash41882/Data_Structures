// Using Prefix Sum Approach (Time Complexity = N^2)
// In this case the time taken to compute sum is irrespective the size of array

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


int Largest_SubArray_Sum2(int arr[], int n)
{
    int Largest_Sum = 0;
    int prefix_sum[100] = {0};
    prefix_sum[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[ i - 1] + arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int SubArray_Sum = 0;
            SubArray_Sum = (i > 0) ? prefix_sum[j] - prefix_sum[i-1] : arr[j];
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

    cout<<"\nLargest Sub Array Sum is = "<<Largest_SubArray_Sum2(arr,n);

    return 0;
}

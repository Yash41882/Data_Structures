#include<iostream>
using namespace std;


void input_Array(int arr[], int size)
    {
        //Taking Input in the array
        cout<<"\nEnter the Elements in Array = ";
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
    }


void print_Array(int arr[], int size)
    {
        //Taking Input in the array
        cout<<"\nThe Elements in Array = ";
        for (int i = 0; i < size; i++)
        {
             cout<<arr[i]<<"\t";
        }
        cout<<endl;
    }

void Max_Min(int arr[], int size)
{
    int max = arr[0], min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if( max < arr[i])
        {
            max = arr[i];
        }

        if( min > arr[i])
        {
            min = arr[i];
        }
    }

    cout<<"Largest Element in Array = "<<max<<endl;
    cout<<"Smallest Element in Array = "<<min<<endl;
}

int main()
{
    system("CLS");
    int n;
    cout<<"\nEnter the size of Array = ";
    cin>>n;

    int arr[n];
    input_Array(arr, n);
    print_Array(arr, n);
    Max_Min(arr,n);
    return 0;
}

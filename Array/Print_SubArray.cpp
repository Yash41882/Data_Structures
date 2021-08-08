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

int Print_SubArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k <= j; k++)
            {
                cout<<"("<<arr[k]<<","")";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
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

    Print_SubArray(arr,n);

    return 0;
}

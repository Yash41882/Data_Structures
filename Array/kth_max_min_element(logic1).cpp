//OWN LOGIC
//Sorting the array and then print the kth element accordingly. 
// Time complexity = Time complexity of bubble sort = O(N^2)

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x= *y;
    *y = temp;
}

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


int kth_max_min_element(int arr[], int size, int key)
{
    for(int i = 0; i < size - 1 ; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    print_Array(arr, size);
    
    cout<<endl<<key<<" th minimun element = "<<arr[key-1];
    cout<<endl<<key<<" th maximum element = "<<arr[(size-1) - (key-1)];
    
    return 0;
}




int main()
{
    system("CLS");
    int n;
    cout<<"\nEnter the size of Array = ";
    cin>>n;

    int arr[n], k;
    input_Array(arr, n);
    cout<<"\nEnter the Kth element = ";
    cin>>k;
    print_Array(arr, n);
    kth_max_min_element(arr, n, k);
    
    return 0;
}

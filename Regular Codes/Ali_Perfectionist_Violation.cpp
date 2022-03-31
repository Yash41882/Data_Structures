// Problem - Ali is a perfectionist, calculate number of voilation from a sorted array.
// Calculate Sum of all violations that are needed to be solved to get sorted array
// Time Complexity = O(nlogn) - For loop and binary search

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"\nEnter the size: ";
    cin>>size;
    
    int arr[size];

    // Taking Input from User.
    cout<<"\nEnter the elements in array : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    // Solving the problem
    int violation=0, high=0,mid=0;
    for(int i=0; i<size; i++)
    {
        if(arr[high] < arr[i])
        {
            high ++;
        }    
            
        else if (arr[high] > arr[i]) 
        {
            // Applying Binary Search
            int start = 0, end = high;   
            while(start < end)
            {
                mid = (start + end) / 2;
                if(arr[mid] == arr[i])
                {
                    mid++;
                    break;
                }

                else 
                {
                    if(arr[mid] > arr[i])
                    {
                        end = mid;
                    }

                    else
                    {
                        start = mid;
                    }
                }
            }

            // Getting total Violations
            violation += i - mid;
        }

    }

    cout<<"\nNumber of violations = "<< violation;
    return 0;

}

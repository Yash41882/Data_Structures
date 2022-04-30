/* Problem - Given an array A of size N. Create another array B of size N where for
every valid i whose next greater element is present in array B[i] = nextGreaterElement(A[i])-A[i], else B[i]=-1.
Your task is to determine if every positive element of B is in non-decreasing order. If they are in non-decreasing order then return 1
else return 0.
Note: nextGreaterElement(A[i]) is A[j] if A[j]>A[i], j>i and j-i is minimum amonq all possible combinations.
*/

#include<bits/stdc++.h>
using namespace std;

// USing Stack
// Time complexity = O(N)
class Solution1 {
  public:
    int solve(int N, int A[]) 
    {
        // code here
        
        stack<int> s;
 
        int C[N];
 
    // iterating from n-1 to 0
    for (int i = N - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= A[i])
            s.pop();
 
        
        if (s.empty())
            C[i] = -1;        
        else
            C[i] = s.top();       
 
        s.push(A[i]);
    }

    int B[N], min = INT_MIN;
        for(int k=0; k<N; k++)
        {
            if(C[k]==-1)
            {
                B[k] = -1;
            }
            else
            {
                if(C[k] - A[k] < min)
                {
                    return 0;
                }
                B[k] = C[k] - A[k];
                min = B[k];
            }
            
        }
        
        
        return 1;
        
    }
    
};


// USing Array
// Time complexity = O(N^2)
class Solution {
  public:
    int solve(int N, int A[]) {
        // code here
        
        int nextGreaterElement[N], B[N];
        std::fill_n(nextGreaterElement, N, -1);  // filling array with -1.
        std::fill_n(B, N, -1);
        int i, j;

        for(i=0; i<N-1; i++)
        {
            for(j=i+1; j<N; j++)
            {
                if(A[i]<A[j])
                {
                    nextGreaterElement[i] = A[j];
                    B[i] = nextGreaterElement[i] - A[i];
                    break;
                }
            }
        }  

        j=-2;
        for( i=0;i<N;i++)
        {
            if (B[i]>-1)
            {
                
                if(B[i]<j)
                {
                   return 0;
                }
                j=B[i];
            }
            
        }
        
        return 1;
        
    }
    
};

int main()
{
    Solution s;
    Solution1 p;
    int arr[]={9, 9, 13, 8, 9, 30, 20, 8, 7};
    cout<<s.solve(9,arr);
    cout<<p.solve(9,arr);

    return 0;
}

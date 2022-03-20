// Cuckoo Series Using DP and Recursion
// Still takes alot of time can be optimised using Hashmap

#include<bits/stdc++.h>
using namespace std;


// Using DP
int CuckooSeries(int n)
{
    int cuckoo[n] = {-1};

    cuckoo[1] = 0;
    cuckoo[2] = 1;

    for(int i = 3; i<=n; i++)
    {
        cuckoo[i] = cuckoo[i-1] + cuckoo[i-2] + 3*1;
    }

    return cuckoo[n];
}

// Using Recursions
int Cuckoo(int n)
{
    if(n == 1)
    {
        return 0;
    }

    if(n == 2)
    {
        return 1;
    }

    return 1*Cuckoo(n-1) + 2*Cuckoo(n-2) + 3*1;
}


int main()
{
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;

    if(n>2)
    {
        cout<<"\nValue of n : "<< CuckooSeries(n);
    }
    else
    {
        cout<<"\nEnter a value of n that is greater than 2";
    }

    return 0;
}

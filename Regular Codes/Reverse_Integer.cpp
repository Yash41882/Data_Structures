// Problem Statement.
// Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0

#include<iostream>
#include<math.h>
using namespace std;

int ReverseInt(int num)
{
    int digit,ans=0;

    // Reversing the Integer
    while(num!=0)
    {
        digit = num%10;
        // Checking if the number is in the range of int i.e., 32 bits
        if ( ans > (INT_MAX /10) || ans < (INT_MIN/10) )
        {
            return 0;
        }
        ans = (ans*10) + digit;
        num= num/10;
    }
    return ans;
}

int main()
{
    
    int num;
    cout<<"\nEnter a number to find reverse = ";
    cin>>num;
    cout<<"\nReverse Integer is  = "<<ReverseInt(num);
    return 0;
}
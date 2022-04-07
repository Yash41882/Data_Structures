// Playing with pointers

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() 
{

    // Playing with Pointers : Integers

    // Int data type
    int x;
    x=8;
    cout<<endl<<"x : "<<x;
    cout<<endl<<"&x : "<<&x;
    
    cout<<endl;

    // Single Pointer
    int *y;
    y = &x;
    cout<<endl<<"y : "<<y;         // &y
    cout<<endl<<"*y : "<<*y;      // x

    cout<<endl;

    // Double Pointer
    int **z;
    z = &y;
    cout<<endl<<"z: "<<z;         // &z
    cout<<endl<<"*z: "<<*z;       // &y
    cout<<endl<<"**z: "<<**z;     // x

    cout<<endl;

    // Triple Pointer
    int ***a;
    a = &z;
    cout<<endl<<"a: "<<a;          // &a
    cout<<endl<<"*a: "<<*a;       //&z
    cout<<endl<<"**a: "<<**a;     // &y
    cout<<endl<<"***a: "<<***a;   // x


   // Playing with Pointers : Characters

    string s = "abcde";
    cout<<endl;
    for(int i=0; i<5;i++)
    {
       cout<<s[i]<<"  ";
    }

    // Pointer
    string *m;
    m = &s;

    cout<<endl<<"m: "<<m; // &s;

    cout<<endl<<*m; // s  It prints the entire string as cout has different implementation for string


    // Playing with Pointers : Arrays
    
    int arr[10] = {1,3,4,5};

    for(int i=0; i< sizeof(arr)/sizeof(int); i++)
    {
        cout<<i[arr]<<" ";
    }

    cout<<endl<<"&arr: "<<&arr;
    cout<<endl<<"arr[0]: "<<*arr;

    cout<<endl;

    int *p;
    p = arr;
    cout<<endl<<"p: "<<p;
    cout<<endl<<"*p: "<<*p;

    cout<<endl<<"*(p+1): "<<*(p+1); // arr[0+1]
    cout<<endl<<"*(p)+1: "<<(*p)+1; // arr[0] + 1
    cout<<endl<<++p;


    return 0;
}

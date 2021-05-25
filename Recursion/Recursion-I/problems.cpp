#include <iostream>
using namespace std;
/*
    1. Write a recursive function to perform binary seach

    2. Write a recursive functioon to pefrom power(a,n);

    3. Write a recursive function to multiply two numbers(a,b) without using * operator.
*/

int binary_search(int *a,int s,int e,int key)
{
    int mid;
    if(s<=e)
    {
        mid = (s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key){
            return binary_search(a,s,mid-1,key);
        }
        else{
            return binary_search(a,mid+1,e,key);
        }
    }
    return -1;
}

int power(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    int ans =  a*power(a,n-1);
    return ans;
}

int multiply(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    int ans = a+multiply(a,b-1);
    return ans;
}



int main() {
    int arr[5] = {2,5,7,10,14};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int ans = binary_search(arr,0,n,key);
    if(ans>=0)
    {
        cout<<"element found at "<<ans<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    int a,b,x;
    cin>>a>>b>>x;
    cout<<power(a,x)<<endl;
    cout<<multiply(a,b)<<endl;


    return 0;
}

#include<iostream>
using namespace std;

int firstOcc(int *a,int n,int key)
{
    // base case
    if(n==0)
    {
        return -1;
    }
    // recursive case
    if(a[0]==key)
    {
        return 0;
    }
    int ans = firstOcc(a+1,n-1,key);
    if(ans==-1)
    {
        if(a[0]==key)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
    return ans+1;
}

int main()
{
    int arr[] = {2,3,5,5,10};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<firstOcc(arr,n,key);
    return 0;
}
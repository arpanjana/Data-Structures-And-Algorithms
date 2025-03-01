#include <iostream>
using namespace std;

int storeOcc(int *a,int n,int i,int j,int *out,int key)
{
    // base case
    if(i==n)
    {
        return j;
    }
    // recursive case
    // accomadate the i in the output array
    if(a[i]==key)
    {
        out[j] = i;
        return storeOcc(a,n,i+1,j+1,out,key);
    }
    // otherwise j will remain the same
    return storeOcc(a,n,i+1,j,out,key);
}

void allOccu(int *a,int n,int i,int key)
{
    // base case
    if(i==n)
    {
        return;
    }
    // recursive case
    if(a[i]==key)
    {
        cout<<i<<" ";
    }
    return allOccu(a,n,i+1,key);
}

int main()
{
    int arr[] = {2,10,10,4,5,10,23};
    int n= sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    //allOccu(arr,n,0,k);
    int output[100];
    int j = storeOcc(arr,n,0,0,output,k);
    for(int s=0;s<j;s++)
    {
        cout<<output[s]<<" ";
    }
    return 0;
}
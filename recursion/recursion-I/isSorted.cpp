#include <iostream>
using namespace std;

bool isSorted(int *a,int n)
{
    // base case
    if(n==0 or n==1)
    {
        return true;
    }
    // self work
    if(a[0]<a[1] and isSorted(a+1,n-1))
    {
        return true;
    } 
    return false;
}


int main()
{
    int arr[5] = {14,5,34,45,60};
    if(isSorted(arr,5))
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}
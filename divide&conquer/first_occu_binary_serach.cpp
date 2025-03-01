#include <iostream>
using namespace std;

int firstOcc(int *a,int s,int e,int key)
{
    int mid;
    int ans = -1;
    while(s<e)
    {
        mid = (s+e)/2;
        if(a[mid]==key)
        {
            ans = mid;
            e = mid-1;
        }
        else if(a[mid]>key)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3,4,6,6,6,8,10,12};
    int n = sizeof(arr)/sizeof(int);
    int k = 6;
    cout<<firstOcc(arr,0,n,k);
}
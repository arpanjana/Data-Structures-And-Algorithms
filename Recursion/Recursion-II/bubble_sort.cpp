#include <iostream>
using namespace std;

void bubble_srt(int *a,int n)
{
    // base case
    if(n==1)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    bubble_srt(a,n-1);
}


void bubble_srt_recursively(int *a,int n,int j)
{
   // base case
   if(n==1)
   {
       return;
   }
   if(j==n-1)
   {
       return bubble_srt_recursively(a,n-1,0);
   }
    // recursive case
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
     bubble_srt_recursively(a,n,j+1);
}

int main()
{
    int arr[] = {5,2,1,4,3};
    int n= 5;
   // bubble_srt(arr,n);
   bubble_srt_recursively(arr,n,0);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
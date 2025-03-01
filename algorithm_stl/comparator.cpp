#include <iostream>
using namespace std;
/*
    Here We are going to understand one very important concepts which is how do we pass function
    as argument/parameter.
*/

bool compare(int a,int b)
{
    return a<b;
}

void bubble_sort(int a[],int n,bool (&cmp)(int a,int b))
{
    for(int itr=0;itr<=n-1;itr++)
    {
        for(int i=0;i<n-itr-1;i++)
        {
            if(cmp(a[i],a[i+1]))
            {
                swap(a[i],a[i+1]);
            }
        }
    }
}



int main() {
    int arr[] = {2,1,4,9,3};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

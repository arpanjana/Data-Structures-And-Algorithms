#include <iostream>
#include <algorithm>
using namespace std;
int main() { 
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<"value of a "<<a<<" and "<<b;
    cout<<max(a,b)<<"\n";
    cout<<min(a,b)<<'\n';
    //reverse the part of the array
    int arr[] = {1,2,3,4,4,5};
    reverse(arr,arr+4);
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

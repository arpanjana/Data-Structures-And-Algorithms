#include <iostream>
using namespace std;

int binary_search(int *a,int s,int e,int key)
{
    int m;
    while(s<=e)
    {
        m = (s+e)/2;
        if(a[m]==key)
        {
            return m;
        }
        if(key<a[m])
        {
            e = m-1;
        }
        else{
            s = m+1;
        }
    }
    return -1;
}


int main() {
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr,0,n,x);
    result == -1 ? cout<<"Element is not present in array"
    :cout<<"Element is present at "<<result;
    return 0;
}

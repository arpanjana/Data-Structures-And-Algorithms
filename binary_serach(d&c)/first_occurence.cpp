#include <iostream>
using namespace std;

int firstOcc(int *a,int s,int e,int key)
{
    int m;
    int first_idx= -1;
    while(s<=e)
    {
        m = s+(e-s)/2;
        if(a[m]==key)
        {
            first_idx = m;
            e = m-1;
        }
        else if(a[m]<key)
        {
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    if(first_idx)
    {
        return first_idx;
    }
    return -1;
}


int main() {
    int a[] = {2,5,10,13,13,15,15,15,19};
    int n =sizeof(a)/sizeof(int);
    int key = 13;
    cout<<firstOcc(a,0,n-1,key);
    return 0;
}

#include <iostream>
using namespace std;
int binary_search_rec(int *a,int s,int e,int key)
{
    int m;
    if(s<=e)
    {
        m = s+(e-s)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            return binary_search_rec(a,m+1,e,key);
        }
        else{
            return binary_search_rec(a,s,m-1,key);
        }
    }
    return -1;
}

int binary_search_itr(int *a,int s,int e,int key)
{
    int m;
    while(s<=e)
    {
        m = s+(e-s)/2;
        if(a[m]==key)
        {
            return m;
        }
        else if(a[m]<key)
        {
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    return -1;
}


int main() {
    int arr[] = {2,5,10,14,18,22};
    int n =sizeof(arr)/sizeof(int);
    int key = 14;
    cout<<binary_search_rec(arr,0,n-1,key)<<endl;
    cout<<binary_search_itr(arr,0,n-1,key);
    return 0;
}

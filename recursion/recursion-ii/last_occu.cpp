#include <iostream>
using namespace std;

int lastOcc(int *a,int n,int key)
{
    // base case
      if(n==0)
      {
          return -1;
      }
      // recursive case
      int ans = lastOcc(a+1,n-1,key);
      if(ans==-1)
      {
          return -1;
      }
      return ans+1;
}
#include <iostream>
using namespace std;

float sqrt_of_n(int n,int p)
{
    int s = 0;
    int e = n;
    float ans = -1;
    while(s<=e)
    {
        int m = (s+e)/2;
        if(m*m==n)
        {
            return m;
        }
        else if(m*m<n)
        {
            ans = m;
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    
    float inc = 0.1;
    for(int j=0;j<p;j++)
    {   
        while(ans*ans<=n)
        {
            ans = ans+inc;
        }
        ans = ans -inc;
        inc = inc/10;
    }

    return ans;
    
}

int main()
{
    int n;
    cin>>n;
    cout<<sqrt_of_n(n,4);
    return 0;
}
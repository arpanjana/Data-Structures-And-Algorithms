#include <iostream>
using namespace std;

int fast_power(int a,int n)
{
    // base case
    if(n==0)
    {
        return 1;
    }
    // recursive case
    int ans = fast_power(a,n/2);
    ans *= ans;
    if(n&1)
    {
        return ans*a;
    }
    else{
        return ans;
    }
}


int main() {
    int a,n;
    cin>>a>>n;
    cout<<fast_power(a,n);
    
}

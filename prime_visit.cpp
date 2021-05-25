#include <iostream>
typedef long long int ll;
using namespace std;

void prime_sieve(int *p)
{
    // mark all the odd numbers as prime
    for(ll i = 3;i<1000000;i+=2)
    {
        p[i] = 1;
    }
    for(ll i =3;i<1000000;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j = i*i;j<1000000;j+=i)
            {
                p[j] = 0;
            }
        }
    }
    
    // special cases
    p[0] = p[1] = 0;
    p[2] = 1;
}


int main() {

    int prime[1000000]= {0};
    prime_sieve(prime);
    // precompute the count of primes upto an index i;
    int cum_prime[1000000] = {0};
    for(int i=1;i<1000000;i++)
    {
        cum_prime[i] = cum_prime[i-1] + prime[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<cum_prime[b]-cum_prime[a-1]<<"\n";
    }
    return 0;
}

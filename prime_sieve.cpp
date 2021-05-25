#include <iostream>
typedef long long int ll;
using namespace std;
// Navie method to check prime number
bool isPrime(int n)
{
    if(n==1)
    {
        return true;
    }
    if(n==2)
    {
        return false;
    }
    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
// more efficent method to check prime numbers
// Here we will create an array of prime numbers 
// We will precompute the prime numbers up to 10^6

void prime_sieve(int *p)
{
    // first mark all odd's number
    for(ll i = 3; i<1000000;i+=2)
    {
        p[i] = 1;
    }
    // Sieve
    for(ll i = 3;i<1000000;i+=2)
    {
        // if the current number is not marked (it's prime)
        if(p[i]==1)
        {
            // mark all the multiples of this number as not prime
            for(ll j = i*i;j<1000000;j+=i)
            {
                p[j] = 0;
            }
        }
    }
    // special casesd
    p[0] = p[1] = 0;
    p[2] = 1;

    
}



int main() {
    int n;
    cin>>n;

    int p[1000000] = {0};
    prime_sieve(p);
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}

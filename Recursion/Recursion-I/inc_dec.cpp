#include <iostream>
using namespace std;

void dec(int n)
{
  // base case
  if(n==0)
  {
    return;
  }
  // recursive case
  cout<<n<<" ";
  dec(n-1);
}

void inc(int n)
{
  // base case
  if(n==0)
  {
    return;
  }
  // recursive case
  inc(n-1);
  cout<<n<<" ";
}
int main()
{
  int n = 5;
  cin>>n;
  inc(n);
  cout<<"\n";
  dec(n);
  return 0;
}


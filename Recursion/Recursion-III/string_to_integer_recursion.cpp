#include <iostream>
#include <cstring>
using namespace std;

int stringToInt(char *a,int n)
{
    // base case
    if(n==0)
    {
        return 0;
    }
    // recursive case
    int digit = a[n-1]-'0'; // last digit
    int small_ans = stringToInt(a,n-1);
    return small_ans*10+ digit;
}

int main()
{
    char a[] = "1242";
    int len = strlen(a);
    int x = stringToInt(a,len);
    cout<<x+1;
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char* a)
{
    int n = strlen(a);
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main()
{
    char a[] = "nadan";
    if(palindrome(a))
    {
        cout<<a<<" is a palindrome";
    }
    else{
        cout<<a<<" is not a palindrome";
    }
}
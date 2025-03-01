#include <iostream>
#include <cstring>
using namespace std;
// Remove consecutive duplicate character from a string
// cccoooding ->coding
void removeDuplicate(char *a)
{
    int n = strlen(a);
    int prev = 0;
    for(int curr = 1;curr<n;curr++)
    {
        if(a[prev]!=a[curr]){
            prev++;
            a[prev] = a[curr];
        }
    }
    prev++;
    // To put the NULL character 
    a[prev] = '\0';
}

int main()
{
    char a[] ="cccoooding";
    removeDuplicate(a);
    cout<<a;
    return 0;
}
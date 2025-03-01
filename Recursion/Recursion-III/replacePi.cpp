#include <iostream>
using namespace std;

void replacePi(char a[],int i)
{
    // base case
    if(a[i]=='\0' or a[i+1]=='\0')
    {
        return;
    }
    // recursive case
    // look for pi in current location
    if(a[i]=='p' && a[i+1]=='i')
    {
        // shift + replacement with 3.14
        int j = i+2;
        // take the j to the end of the array
        while(a[j]!='\0')
        {
            j++;
        }
        // shifting the input from right to left direction
        while(j>=i+2)
        {
            a[j+2] = a[j];
            j--;
        }
        // replacement + recucrsive call for the reamining part of the string
        a[i]='3';
        a[i+1] = '.';
        a[i+2] = '1';
        a[i+3] = '4';
        replacePi(a,i+4);

    }

    else{
        replacePi(a,i+1);
    }

    return;

}


int main() {
    char a[1000];
    cin>>a;
    replacePi(a,0);
    cout<<a;
}

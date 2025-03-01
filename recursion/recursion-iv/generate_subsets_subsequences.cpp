#include <iostream>
using namespace std;

/*
    Subsequence/Subsets Generation
    Important concept for many problems
    Given a string containing n characters find out all the subsets of the string.
    
    Sample I/O:
    s = "abc"
    output = ['a','b','c','ab','bc','ac']
*/



void generate_subsequence(char *inp,char* out,int i,int j)
{
    // base case
    if(inp[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    // recursive case
    // Include the current character
    out[j] = inp[i];
    generate_subsequence(inp,out,i+1,j+1);
    // Exclude the current character
    generate_subsequence(inp,out,i+1,j);
}


int main()
{
    char input[] = "abc";
    char output[100];
    generate_subsequence(input,output,0,0);

    return 0;
}
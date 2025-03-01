#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // take input 
    int n;
    cin>>n;
    cin.get(); // to consume next line '\n' 
    char a[1000];
    int max = 0;
    char res[1000];
    for(int i=0;i<n;i++)
    {
        cin.getline(a,1000);
        if(max<strlen(a))
        {
            max = strlen(a);
            strcpy(res,a);
        }
    }
    cout<<res<<" "<<max;


    return 0;
}
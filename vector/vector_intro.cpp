#include <iostream>
#include <vector>
using namespace std;
int main() {
   // You can create and initialise a vector
   vector<int> a;
   vector<int> b(5,10); // five int with value 10 - init a vector of zeros(n,0)
   vector<int> c(b.begin(),b.end());
   vector<int> d{1,2,3,4,5};
    // Look at how we can iterate over the vector
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;


    // We can also use iterators
    // it is like a pointer and this iterator is defined in the vector class
    // there is a class vector inside that class we have define iterator
    // So it would be of this type ""vector<int>::iterator"

    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    // Foreach loop
    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;
    // Discuss more functions
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // Understand at memory level what are the differences in the two
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl; // sizoe of underlying array
    cout<<v.max_size()<<endl; // maximum no of elements a vector can hold in the worst case acc to avbl memory in the system


    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;



   return 0;
}

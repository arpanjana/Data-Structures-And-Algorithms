#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> d{1,2,3,10,15};
    // Push Back O(1) for most of the time
    d.push_back(18);
    // Pop Back removes the last element O(1)
    d.pop_back();
    for(int x:d)
    {
        cout<<x<<",";
    }
    cout<<'\n';
    // Insert some elements in the middle
    d.insert(d.begin()+3,4,100);
    for(int x:d)
    {
        cout<<x<<",";
    }
    cout<<'\n';
    // erase some elements in the middle
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5);

    //size
    cout<<d.capacity();
    cout<<d.size();

    for(int x:d)
    {
        cout<<x<<",";
    }
    cout<<'\n';
    // We avoid the shrink
    d.resize(18);// if the size is increasing then more memory will be allocate
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    // remove all the elements of the vectors, doesn't delete the memory occupied by the array.
    d.clear();
    // empyt()
    if(d.empty())
    {
        cout<<"This is an empty vector"<<endl;
    }
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    // Reserve
    int n;
    cin>>n;
    vector<int> v;
    // To avoid doubling,we will use reserve function.

    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"changing capcity "<<v.capacity()<<endl;
    }

    for(int x:v)
    {
        cout<<x<<",";
        
    }
    cout<<endl;


    return 0;
}

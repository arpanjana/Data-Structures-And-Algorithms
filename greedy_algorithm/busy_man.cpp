#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int t,n,s,e;
    vector<pair<int,int>> v;
    cin>>t;
    while(t--)
    {
        // first insert all the activities
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }
        // sort them according to ending of the activities
        sort(v.begin(),v.end(),compare);
        // selection
        int res = 1;
        int pick_ending_time = v[0].second;

        for(int i=1;i<n;i++)
        {
            if(v[i].first>=pick_ending_time)
            {
                res++;
                pick_ending_time = v[i].second;
            }
        }
        cout<<res<<"\n";

        v.clear();
    }
}
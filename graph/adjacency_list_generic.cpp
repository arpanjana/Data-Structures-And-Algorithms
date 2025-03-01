#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class Graph{
    private:
        unordered_map<string,list<pair<string,int>>> l;
    public:
        void addEdge(string x,string y,int wt,bool bidir)
        {
            l[x].push_back(make_pair(y,wt));
            if(bidir)
            {
                l[y].push_back(make_pair(x,wt));
            }
        }
        
        void printAdjList()
        {
            // Iterate over the vertices(keys)
            for(auto p:l)
            {
                //cout<<"vertex "<<v<<"--->";
                string city = p.first;
                list<pair<string,int>> nbrs = p.second;
                cout<<city<<"-->";
                for(auto nbr:nbrs)
                {
                    string dest = nbr.first;
                    int dist = nbr.second;
                    cout<<"("<<dest<<","<<dist<<")";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    Graph g;
    g.addEdge("A","B",20,true);
    g.addEdge("B","D",30,true);
    g.addEdge("D","C",40,true);
    g.addEdge("C","A",10,true);
    g.addEdge("A","D",50,false);
    g.printAdjList();
}
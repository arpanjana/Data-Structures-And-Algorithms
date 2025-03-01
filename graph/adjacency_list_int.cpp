#include <iostream>
#include <list>
using namespace std;

class Graph{
    private:
        int V;
        list<int> *l;
    public:
        Graph(int v)
        {
            this->V = v;
            l = new list<int>[v];
        }
        void addEdge(int x,int y)
        {
            l[x].push_back(y);
            l[y].push_back(x);
        }
        void printAdjList()
        {
            // Iterate over all the vertices
            for(int i=0;i<V;i++)
            {
                cout<<"Vertex "<<i<<"-->";
                // Print correpsonding neighbors to the verice
                for(int nbrs:l[i])
                {
                    cout<<nbrs<<" ";
                }
                cout<<"\n";
            }
        }
};

int main()
{
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.printAdjList();
    return 0;
}
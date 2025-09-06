#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph{
    int v; //Total vertices
    list<int>*l; //Store list of int
public:
    Graph(int v){
        this->v = v;
        l = new list<int> [v]; //initialise the size of list
    }
    
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0;u<v;u++){
            list<int>neigh = l[u];
            cout<<u<<" : ";
            for(int v:neigh){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    graph.print();

    return 0;
}

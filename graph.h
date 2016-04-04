#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

using namespace std;

class Edge
{
private:
    unsigned long _source,
                  _destination;

    unsigned long _weight;

    bool _biDirectional;

public:
    Edge(){
        _source = -1;
        _destination = -1;
        _biDirectional = true;
        _weight = -1;
    }
};

class Graph
{
private:
    unsigned long _vertices;
    vector<Edge> _edges;

    unsigned long **_graph;
public:
    Graph(unsigned long);

    // -- Initialize the graph with all the 1-1 vertex connections to 0 and others to -1 --
    void initializeGraph();

    // -- Populates the graph with the edges --
    void populateGraph(vector<Edge> &edges);

    // -- Update an edge of a graph --
    void updateGraph(Edge e);

    // -- Remove a connection from the graph --
    void removeEdgeBetween(unsigned long source, unsigned long destination);

    void getNumVertices();
};

#endif // GRAPH_H

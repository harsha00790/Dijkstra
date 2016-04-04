#include "graph.h"

Graph::Graph(unsigned long n){
    _vertices = n;
    _edges.clear();
    _graph == nullptr;
}

void Graph::initializeGraph(){
    if(_vertices > 0){
        if(_graph != nullptr){
            delete [](*_graph);
            delete [](_graph);
        }

        _graph = new unsigned long[_vertices];
        for(unsigned long i = 0; i < _vertices; i++){
            _graph[i] = new unsigned long[_vertices];
            _graph[i][i] = 0; // -- Connection to same vertex --
            for(unsigned long j = 0; j < _vertices; j++){
                if(j != i){
                    _graph[i][j] = -1;
                }
            }
        }
    }
}

void Graph::updateGraph(Edge e){
    if(_graph != nullptr){
        _graph[e._source][e._destination] = e._weight;
        if(e._biDirectional){
            _graph[e._destination][e._source] = e._weight;
        }
    }
}

void Graph::populateGraph(vector<Edge> &edges){
    if(edges.size() > 0){
        for(size_t i = 0; i < edges.size(); i++){
            updateGraph(edges[i]);
        }
    }
}

void Graph::removeEdgeBetween(unsigned long source, unsigned long destination){
    // -- Empty Function Currently --
}

void Graph::getNumVertices(){
    return _vertices;
}

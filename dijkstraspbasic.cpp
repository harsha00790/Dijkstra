#include "dijkstraspbasic.h"

DijkstraSPBasic::DijkstraSPBasic(unsigned long n) :_graph(nullptr){
    _graph = new Graph(n);
    _source = 0;
    _distances.clear();
    _previous.clear();
}

void DijkstraSPBasic::run(){
    // -- Set the source to 0 --
    _distances[_source] = 0;
    vector<unsigned long> unvisitedVertices;

    // -- Now set all others to infinity --
    for(unsigned long i = 0; i < _graph->_vertices; i++){
        if(i != _source){
            _distances[i] = -1;
            _previous[i] = -1;
        }
        unvisitedVertices.emplace_back(i);
    }

    // -- Now, start the process --
    while(unvisitedVertices.size() > 0){

    }
}


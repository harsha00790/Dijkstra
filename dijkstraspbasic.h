#ifndef DIJKSTRASPBASIC_H
#define DIJKSTRASPBASIC_H

#include "graph.h"
#include <vector>

using namespace std;

class DijkstraSPBasic
{
private:
    Graph *_graph;
    unsigned long _source;
    vector<long> _distances;
    vector<long> _previous;

public:
    DijkstraSPBasic(unsigned long n);

    void run();
};

#endif // DIJKSTRASPBASIC_H

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Graph {
    public:
        Graph();

        void createGraph(char* fileName);        
        vector<vector<int>> getGraph() {return _graph;};

    private:
        int _numOfVertexes;
        int _numOfEdges;
        vector<vector<int>> _graph;
};

#endif
#include "Graph.hpp"

Graph::Graph (){
    _numOfVertexes = 0;
    _numOfEdges = 0;
}

void Graph::createGraph(char* fileName) {
    fstream file(fileName, ios::in);
    int origin, destination;

    file >> _numOfVertexes >> _numOfEdges;
    vector<vector<int>> graph(_numOfVertexes);

    for (int i = 0; i < _numOfEdges; i++) {
        file >> origin >> destination;
        graph[origin].push_back(destination);
        graph[destination].push_back(origin);
    }
    _graph = graph;
}
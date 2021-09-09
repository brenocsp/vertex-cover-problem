#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <vector>

using namespace std;

// Task 1: find the size of the minimum vexter cover for an undirected acyclic graph

class Task1 {
    public:
        Task1(vector<vector<int>> graph);
        void printMinimumVextexCoverSize();

    private:
        int min(int a, int b);
        int calculateMinimumVextexCoverSize(int vertex, bool *visited);

        vector<pair <int,int>> _costs;
        vector<vector<int>> _graph;
};

#endif
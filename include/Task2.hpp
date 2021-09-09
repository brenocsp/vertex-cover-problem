#ifndef TASK2_H
#define TASK2_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Task 2: find an aproximation for the size of the minimum vexter cover for an undirected cyclic graph

class Task2 {
    public:
        Task2(vector<vector<int>> graph);
        void printMinimumVextexCoverSizeAprox();

    private:
        void calculateMinimumVextexCoverAprox();

        vector<int> _resultSet;
        vector<vector<int>> _graph;
};

#endif
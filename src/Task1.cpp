#include "Task1.hpp"

Task1::Task1(vector<vector<int>> graph) {
    _graph = graph;
    _costs.resize(graph.size());
}

int Task1::min(int a, int b) {
    return (a < b) ? a : b;
}

int Task1::calculateMinimumVextexCoverSize (int vertex, bool *visited) {
    visited[vertex] = true;
    for (int i : _graph[vertex]) {
        if (!visited[i]) {
            calculateMinimumVextexCoverSize(i, visited);
        }
    }

    _costs[vertex].first = 1; //include a vertex
    _costs[vertex].second = 0; //exclude a vertex

    for (int i : _graph[vertex]) {
        _costs[vertex].first +=  min(_costs[i].first, _costs[i].second);
        _costs[vertex].second += _costs[i].first;
    }

    return min(_costs[vertex].first, _costs[vertex].second);
}

void Task1::printMinimumVextexCoverSize() {
    if ((int)_graph.size() < 2) {
        cout << "0" << endl;
    }

    else {
        bool visited[(int)_graph.size()] = {false};
        cout << calculateMinimumVextexCoverSize(0, visited) << endl;
    }
}
#include "Task2.hpp"

Task2::Task2(vector<vector<int>> graph) {
    _graph = graph;
}

void Task2::calculateMinimumVextexCoverAprox() {
    bool visited[(int)_graph.size()] = {false};

    for (int i=0; i < (int)_graph.size(); i++) {
        if (!visited[i]) {
            for (int j : _graph[i]) {
                if (!visited[j]) {
                    visited[i] = true;
                    visited[j] = true;
                    _resultSet.push_back(i);
                    _resultSet.push_back(j);
                    break;
                }
            }
        }
    }
}

void Task2::printMinimumVextexCoverSizeAprox() {
    if ((int)_graph.size() < 2) {
        cout << "0" << endl;
    }

    else {
        calculateMinimumVextexCoverAprox();
        sort(_resultSet.begin(), _resultSet.end());
        cout << _resultSet.size() << endl;
        for (int i : _resultSet) {
            cout << i << endl;
        }
    }
}
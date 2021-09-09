#include "Graph.hpp"
#include "Task1.hpp"
#include "Task2.hpp"

int main(int argc, char** argv) {

    if (argc != 3) return 0;

    Graph *graph = new Graph();
    graph->createGraph(argv[2]);

    if ((string)argv[1] == "tarefa1") {
        Task1 *task1 = new Task1(graph->getGraph());
        task1->printMinimumVextexCoverSize();
        delete task1;
    }
    else {
        Task2 *task2 = new Task2(graph->getGraph());
        task2->printMinimumVextexCoverSizeAprox();
        delete task2; 
    }

    delete graph;
    return 0;
}
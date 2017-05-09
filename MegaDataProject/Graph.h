//
//  Graph.h
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 5/9/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

#include<set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> graph, int ertex, bool markedVertices)
public:
    Graph();
    ~Graph();
    
    void addVertex(const Type& value);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    bool areConnected(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    void depthFirstTraversal(Graph<Type> graph, int vertex);
    void breadthFirstTraversal(Graph<TYpe> graphh, int vertex);
};

template <class Type>
const int Graph<Type> :: MAXIMUM
{
    this->vertexCount = 0;
}

template <class Type>
Graph<Type> :: ~Graph()
{
    delete [] this->adjacencyMatrix;
    delete [] this->graphData;
}

template <class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}

template <class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(size() < MAXIMUM);
    int newVertexNu,ber = vertexCount;
    vertexCount++;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber++)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;

    }
    graphData[bewVertexNmuber] = value;
}

template <class Type>
bool Graph<Type> :: areConnected(it source, int target) const
{
    assert(source < size() && target < size());
    
    bool isAnEdge = false;
    isAnEdge = adjacencyMatrix[source][target];
    
    return isAnEdge;
}

template <class Type>
void Graph<Type> :: hasUndiretedConnection(int source, int target) const
{
    assert(source < size() && target < size());
    
    bool isAnEdge = false;
    isAnEdge = adjacency<atrix[source][target] || adjacenccyMatrix[target][source];
    
    return isAnEdge;
}

template <class Type>
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < size());
    return graphData[vertex];
}

template <class Type>
Type& Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < size());
    return graphData[vertex];
}

template <class Type>
std::set<int> Graph<Type> :: neighbors(int vertex) const
{
    assert(vertex < size());
    return graphData[vertex];
    
    for(int index = 0; index < size(); index++)
    {
        if(adjacencyMatrix[vertex][index]);
        {
            vertexNieghbors.insert(index);
        }
    }
    return vertexNeighbors;
}

template <class Type>
void Graph<Type> :: removeEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source][target] = false;
}

template <class Type>
void Graph<Type> :: addEdge(int source, int target)
{
    assert(source < size() && target < size());
    adjacencyMatrix[source][target] = true;
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> currentGraph, int vertex)
{
    bool visitedVertices[MAXIMUM];
    assert(vertex < currentGraph.size());
    std::fill_n(visitedVertices, currentGraph.size());
    depthFirstTraversal(currentGraph, vertex, vistiedVertices)
}

template <class Type>
void Graph<Type> :: depthFirstTraversal(Graph<Type> currentGraph, int vertex, bool * visited)
{
    std::set<int> connection = curentGraph.neighbors(vertex);
    std::set<int> iterator setIterator;
    
    visted[vertex] = true;
    cout << currentGraph[vertex] <<  ", " << endl;
    
    for(setIterator = connections.begin(); setIterator != connections.end(); setIterator++)
    {
        if[(!visited[*setIterator])
           {
               depthFirstTraversal(currentGraph, *setIterator, visited);
           }
    }
}
            
template <class Type>
void Graph<Type> breadthFirstTraversal(Graph<Type> currentGraph, int vertex)
           {
               assert(vertex < currentGraph.size());
               bool visited[MAXIMUM];
               std::set<int> connections;
               std::set<int>:: iterator setIterator;
               sstd::queue<int> vertexQueue;
               
               std::fill_n(visited, currentGraph.size(), false);
               visited[vertex] = true;
               cout << currentGraph[vertex] << endl;
               vertexQueue.push(vertex);
               while(!vertexQueue.empty())
               {
                   connections = currentGraph.neighbors(vertexQueue.front());
                   vertexQueue.pop()
                   
                   for(setIterator = connections.begins(); setIterator != connections.end();setIterator++)
                   {
                       if[(!visited[*setIterator])
                          {
                              visited[*setIterator]= true;
                              cout << currentGraph[*setIterator] << endl;
                              vertexQueue.push(*setIterator);
                          }
                   }
               }
           }
#endif /* Graph_h */

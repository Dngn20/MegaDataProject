//
//  Node.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/13/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp


template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type> * nextPointer;

public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setnextPointer(Node<Type> * pointer);
    Type getNodeData();
    Node<Type> * getnextPointer();
};


/*
Implementation
*/

template <class Type>
Node<Type> :: Node()
{
    //Explictily DO NOT instantiate the NodeData data member
    this->nextPointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type Data)
{
    this->nodeData = Data;
    this->nextPointer = nullptr;
}

template <class Type>
void Node<Type> :: setnextPointer(Node<Type> * nextPointer)
{
    this->nextPointer = nextPointer;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getnextPointer()
{
    return this->nextPointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type newValue)
{
    nodeData = newValue;
}















#endif /* Node_hpp */

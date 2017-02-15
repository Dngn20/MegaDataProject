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
    Node<Type> * nodePointer;

public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> * pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
};


/*
Implementation
*/

template <class Type>
Node<Type> :: Node()
{
    //Explictily DO NOT instantiate the NodeData data member
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type Data)
{
    this->nodeData = Data;
    this->nodePointer = nullptr;
}

template <class Type>
void Node<Type> :: setNodePointer(Node<Type> * nextPointer)
{
    this->nodePointer = nextPointer;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return this->nodePointer;
}


















#endif /* Node_hpp */

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
public:
    Node();
    Node(Type nodeData);
    Node(Type data, Node<Type> * next);
    
    void setNodeData(Type data);
    void setNodePointer(Node<Type> pointer);
    Type getNodeData();
    Node<Type> * getNodePointer();
private:
    Type nodeData;
    Node<Type> * nodePointer;
};

#endif /* Node_hpp */

//
//  BiDirectionalNode.h
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/27/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BiDirectionalNode : public Node<Type>
{
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalNode<Type> * next);
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
}
template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    
}

BiDirectionalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}
#endif /* BiDirectionalNode_h */
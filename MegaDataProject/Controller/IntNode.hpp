//
//  IntNode.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/6/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

class IntNode
{
private:
    int nodeData;
    IntNode * nodePointer;
public:
    //Constructors Section
    IntNode();
    IntNode(int value);
    /*
     Creates ab IntNode with a specifed value and next node Pointer
     */
    IntNode(int value, IntNode * nextNode);
    
    //Methods
    int getNodeData();
    IntNode * getNodePointer();
    
    void setNodeData(int value);
    void setNodePointer(IntNode * next);
};

#endif /* IntNode_h */

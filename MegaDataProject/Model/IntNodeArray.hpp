//
//  IntNodeArray.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/8/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include "IntNode.hpp"
class IntNodeArray
{
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value);
    int getFromIndex(int index);
    int getSize();
};
#endif /* IntNodeArray_hpp */

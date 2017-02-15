//
//  Array.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/15/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include "Node.hpp"
#include <assert.h>

template  <class Type>
class Array
{
private:
    int size
    Node<Type> * front;
public:
    Array();
    Array(int size);
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
};

/*
Implementation
 */




#endif /* Array_hpp */

//
//  CircularList.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/1/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
private:
    
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{

}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    ClassName::addFront(sdsad)
}
#endif /* CircularList_h */

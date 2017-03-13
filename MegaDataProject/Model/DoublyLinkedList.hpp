//
//  DoublyLinkedList.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/1/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    DoublyLinkedList();
       
    int getSize() const;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;

    virtual void add(Type data) = 0;
    virtual Type removed(int index) =0;
    virtual ~DoublyLinkedList();
    
    void setFront(BiDirectionalNode<Type> * front);
    void setSize(int updated);
    void setEnd(BiDirectionalNode<Type> * end);
    
    
};


template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList()
{
    this->size= 0;
    this->front = nullptr;
    this->end = nullptr;
}
template <class Type>
int DoublyLinkedList<Type> :: getSize() const
{
    return this-> size;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getFront()const
{
    return front;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getEnd() const
{
    return end;
}

template <class Type>
void DoublyLinkedList<Type> :: setFront(BiDirectionalNode<Type>* front)
{
    this->front = front;
}

template <class Type>
void DoublyLinkedList<Type> :: setEnd(BiDirectionalNode<Type> * end)
{
    this->end = end;
}



#endif /* DoublyLinkedList_h */

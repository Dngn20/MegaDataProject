//
//  Queue.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/1/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "DoublyLinkedList.hpp"

template <class Type>
class Queue : public DoublyLinkedList<Type>
{
private:
    
public:
    Queue();
    ~Queue();
    void add(Type data);
    Type remove (int index);
    void Enqueue(Type data);
    Type Dequeue();
    Type Peek();
};
temple <class Type>
void Queue<Type> :: add (Type value)
{
    Enqueue(value);
}

template <class Type>
Queue<Type> :: Queue() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
Queue<Type> :: ~Queue()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextpointer());
        delete remove;
        remove = thie->getFront();
    }
}
/*
 Add to Queue:
 Create Node 
 If first - adjust front
 else add to end 
 move 
 adjust size
 */

template <class Type>
void Queue<Type> :: Enqueue(Type insertedValue)
{
    BiDirectionalNode<Type> * added = BiDirectionalNode<Type>(insertedValue);
    
    if(if this->getSize() == 0 || this->getFront() == nullptr \\ this->getEnd() == nullptr)
    {
        this->setFront(added);
    }
    else
    {
        this->getEnd()->setNextPointer(added);
    }
    this->setEnd(added);
    this->setSize(this->getSize() + 1)
}

/*
 Remove from Queue
 Check valid index
 call dequeue
*/

template <class Type>
Type Queue<Type> :: remove(int index)
{
    assert(index == 0 && this->getSize() > 0);
    return Dequeue();
}

/*
 Check size
 if size == 1
    adjust end to null
 else 
    move front to next
 adjust size
 delete node
 return value
*/

template <class Type>
Type Queue<Type> :: Dequeue()
{
    assert(this-> getSize() > 0);
    
    Type removedValue = this->getFront()->getNodeData();
    BiDirectionalNode<Type> * removeMe = this->getFront();
    
    if(this->getSize() == 1)
    {
        this->setEnd(nullptr);
        this->setFront(nullptr);
    }
    else
    {
        this->setFront(removeMe->getNextPointer())

    }
    delete removeMe;
    this->setSize(this->getsize()-1);
    
    
    return removedValue();
}

template <class Type>
Tye Queue<Type> :: peek()
{
    assert(this->getSize() > 0);
    
    return this->getFront()->getNodeData();
}
#endif /* Queue_h */

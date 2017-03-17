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
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type data);
    
private:
    BiDirectionalNode<Type> * findNode(int index);
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

template <class Type>
CircularList<Type> :: CircularList()
{
    BiDirectionalNode<Type> * remove = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete remove;
        remove = this->getFront();
    }
}

template <class Type>
BiDirectionalNode<Type> * findNode(int index)
{
    BiDirectionalNode<Type> * nodeToFind;
    if(index < this->getSize() /2)
    {
        nodeToFind= this->getFront();
        for(int spot = 0;spot < index; spot++)
        {
            nodtToFint = nodeToFind->getNextPointer;
        }
    }
    else
    {
        nodeToFind = this->getEnd();
        for(int spot = this->getSize() -1; spot > index; spot--)
        {
            nodeToFind = nodeToFind->getPreviousPointer();
        }
    }
    return nodeToFind;
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    BiDirectionalNode<Type> * addMe =new BiDirectionalNode<Type>(data);
    
    if(this->getSize() == 0)
    {
        this->setFront(addMe);
        this->setEnd(addMe);
        addMe->setPreviousPointer(this->getEnd());
        this->getFront()->setPreviousPointer(addMe);
        this->setEnd(addMe);
    }
    else
    {
        this->getEnd()->setNextPointer(addMe);
        addMe->setPreviousPointer(this->getFront());
        addMe->setNextPointer(this->getFront());
        this->getFront()->setPreviousPointer(addMe);
        this->setSize(this->getSize() + 1);
    }
    this->setSize(this->getSize() + 1)
}

template <class Type>
Type CircularList<Type> :: remove (int index)
{
    assert(index >=0 && index < this->getSize())
    
    Type removedValue;
    
    BiDirectionalNode<Type> * remmoved = findNode(index);
    
    removedValue = removed->getNodeData();
    
    BiDirectionalNode<Type> * oldPrevious = removed->getPreviousPoiner();
    BiDirectionalNode<Type> * oldNext = removed->getNextPointer();
    
    if(this->getSize() > 1)
    {
        oldPrevious->setNextPointer(oldNext);
        oldNext->setPreviousPointer(oldPreivous);
        
        if(index == 0)
        {
            this->setFront(this->getFront()->getNextPointer());
        }
        else if(index == this->getSize() - 1)
        {
            this-setEnd(this->getEnd() -> getPreviousPointer());
        }
    }
    else
    {
        
        this->setFront(nullptr);
        this->setEnd(nullptr);
    }
    
    delete removed;
    this->setSize(this->getSize() - 1);
    
    return removedValue;
}

template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->getSize());
    
    BiDirectionalNode<Type> * current = findNode(index);
    
    retrieved = current->getNodeData();
    
    return retrieved;
}

template <class Type>
Type CircularList<Type> :: setAtIndex(int index , Type data)
{
    assert(index >= 0 && index < this->getSize());
    
    Type replace;
    
    BiDirectionalNode<Type> * current = findNode(index);
    
    replaced = current->getNodeData();
    current->ssetNodeData(data);
    
    return replaced;
}
#endif /* CircularList_h */

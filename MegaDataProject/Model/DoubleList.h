//
//  DoubleList.h
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/15/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

template <class Type>
class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    void addAtIndex(int index, Type value);
    Type getFromIndex(int index);
    Type getFromIndexFast(int index);
};

template <class Type>
DoubleList<Type> :: DoubleList() : DoublyLinkedList<Type>()
{
    
}

template <class Type>
DoubleList<Type> :: ~DoubleList()
{
    BiDirectionalNode<Type> * deleteStructure = this->getFront();
    while(this->getFront() != nullptr)
    {
        this->setFront(this->getFront()->getNextPointer());
        delete deleteStructure;
        deleteStructure = this->getFront();
    }
}

template <class Type>
Type DoubleList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type valueAtIndex;
    
    BiDirectionalNode<Type> * reference = this->getFront();
    for(int position = 0; position < index; position++)
    {
        reference = reference->getNextPointer();
    }
    valueAtIndex = reference->getNodeData();
    
    return valueAtIndex;
}

template <class Type>
void DoubleList<Type> :: add(Type value)
{
    BiDirectionalNode<Type> * addedNode = new BiDirectionalNode<Type>(value);
    if(this->getSize() == 0)
    {
        this->setFront(addedNode);
    }
    else
    {
        this->getEnd()->setNextPointer(addedNode);
        addedNode->setPreviousPointer(this->getEnd());
    }
    this->setEnd(addedNode);
    this->setSize(this->getSize() + 1);
}

template <class Type>
Type DoubleList<Type> :: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type> * nodeToTakeOut = this->getFront();
    for(int spot = 0; spot < index; spot++)
    {
        nodeToTakeOut = nodeToTakeOut->getNextPointer();
    }
    derp = nodeToTakeOut->getNodeData();
    if(this->getSize() > 1)
    {
        BiDirectionalNode<Type> * prev = nodeToTakeOut->getPreviousPointer();
        BiDirectionalNode<Type> * next = nodeToTakeOut->getNextPointer();
        
        if(prev != nullptr)
        {
            prev->setNextPointer(next);
        }
        if(next !nullptr)
        {
            next->setPreviousPointer(prev);
        }
        
        prev->setNextPointer(next);
        next->setPreviousPointer(prev);
        
        if(index == 0)
        {
            this->setFront(this->getFront()->getNextpointer());
            this->getFront()->setPreviousPointer(nullptr);
        }
        else if(index == this->getSze() -1)
        {
            this->setEnd(this->getEnd->getPreviousPointer())
            this->getEnd()->setNextPointer(nullptr);
        }

    }
        else
    {
        this->setFront(nullptr);
        this-setEnd(nullptr);
    }

    delete nodeToTakeOut;
    
    this->setSize(this->getSize() - 1);
    return derp;
}

template <class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >= 0 && index < this->getSize());
    Type valueAtIndex;
    BiDirectionalNode<Type> * reference;
    if(index < this->getSize() / 2)
    {
        reference = this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
        }
    }
    else
    {
        reference = this->getEnd();
        for(int position = this->getSize() - 1; position > index; position--)
        {
            reference = reference->getPreviousPointer();
        }
    }
    
    valueAtIndex = reference->getNodeData();
    return valueAtIndex;
}
#endif /* DoubleList_hpp */
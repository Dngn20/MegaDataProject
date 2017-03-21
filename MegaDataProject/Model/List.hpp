//
//  List.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/21/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

template <class Type>
class List
{
private:
    int size;
    Node<Type> * front;
    Node<Type> * end;
public:
    List();
    List(List<Type> & source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void addFront(Type value);
    void addEnd(Type value);
    Type remove(int index);
    Type getFromIndex(int index);
    Type setAtIndex(int index, Type value);
    bool contains(Type data);
    int getSize() const;
    Node<Type> * getFront() const;
    Node<Type> * getEnd() const;
};

template <class Type>
List<Type> :: List()
{
    this-> size = 0;
    this->front = nullptr;
    this->end = nullptr;
}
template <class Type>
List<Type> :: ~List()
{
    Node<Type> * destruction = front;
    while(front != nullptr)
    {
        front =front->getnextPointer();
        delete destruction;
        destruction = front;
    }
}

template <class Type>
int List<Type> :: getSize() const
{
    return this->size;
}
template <class Type>
Node<Type> * List<Type> :: getFront() const
{
    return this->front;
}

template <class Type>
List<Type> :: List(List<Type> & source)
{
    
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setnextPointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
Node<Type> * List<Type> :: getEnd() const
{
    return this->end;
}

template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setnextPointer(front);
        this->front=newFirst;
    }

    size++;
}

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >0 && index <= size);
    if(index ==0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getnextPointer();
        }
        
        previous->setnextPointer(insertedNode);
        insertedNode->setnextPointer(current);
        
        size++;
    }
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Type removedData;
           
    Node<Type> * current = front;
        
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getnextPointer();
    }
           
    removedData = current->getnextPointer();
    current->setNodeData(data);
           
    return removedData;
}

template <class Type>
Type List<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type information;
    
    Node<Type> * current = front;
    for(int position = 0; position < index; position++)
    {
        current = current-> getnextPointer();
    }
    
    information = current->getNodeData();
    
    return information;
}

template <class Type>
bool List<Type> :: contains(Type findMe)
{
    bool isInList = false;
    Node<Type> * current = front;
        
    for(int index = 0; index < size; index++)
    {
        if(current->getNodeData() == findMe)
        {
            isInList = true;
            return isInList;
        }
    }
    return isInList;
}
template <class Type>
Type List<Type> :: remove(int index)
{
    assert(index >= 0 && index < size);
    Type removed;
    
    Node<Type> * current = front;
    Node<Type> * previous = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getnextPointer();
    }
    else if(index == size - 1)
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getnextPointer();
        }
        
        toBeRemoved = current;
        previous->setnextPointer(nullptr);
        this->end = previous;
    }
    else
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getnextPointer();
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getnextPointer();
        previous->setnextPointer(current);
        
    }
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return removed;
}
#endif /* List_hpp */

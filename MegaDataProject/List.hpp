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
    Node<Type> * front
public:
    List();
    List(List<Type> & source);
    ~List<Type>();
    
    void addAtIndex(int index, Type value);
    void add(Type value);
    Type remove(int index);
    Type setAtIndex(int index)
    bool contains(Type data)
    int getSize() const;
    Node<Type> * getFront() const;
};

template <class Type>
List<Type> :: List()
{
    
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
        end->setNodePointer(added);
        this->end = added;
    }
    size++;
}

template <class Type>
Node<Type> * ListType :: getEnd() const
{
    
}

template <class Type>
void List<Type> * List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = firstl
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setNodePointer(front);
        this-.front=newFirst
    }

    size++;
}

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    asser(index >0 && index <= size);
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
        
        for(int position = 0; position < index; position)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        previous->setNodePointer(insertedNode);
        insertedNode->setNodePointer(current);
        
        size++;
    }
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 :: setAtIndex(int index, Type data)
}

template <class Type>
Type List<Type> :: getFromIndex(int index)
{
    
}

template <class Type>
Type List<Type> :: remove(int index)
{
    assert(index >= 0 && index < size;)
    Type removed;
    
    Node<Type> * current = front;
    Node<Type> * previous = nullptr;
    Node<Type> * toBeRemoved = nullptr;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = front->getNodePointer();
    }
    else if(index == size -1)
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
       
        toBeRemoved = current;
        previous->setNodePointer(nullptr);
        this->end = previous;

    }
    else
    {
        for(int spot = 0; spot < index; spot++)
        {
            previous = current;
            current = current->getNodePointer();
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getNodePointer();
        previous->setNodePointer(current);

    }
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return removed; 
}

#endif /* List_hpp */

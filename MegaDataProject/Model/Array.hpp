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
#include <iostream>

using namespace std;

template  <class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
    //Destructor
    ~Array<Type>();
    //Copy Constructor
    Array<Type>(const Array<Type> & toBeCopied);
    //Helper Method
    int getSize() const;
    Node<Type> * getFront() const;
    int nextIndexOf(Type value, int position);

};

/*
Implementation
 */

template <class Type>
Array<Type> :: Array()
{
    //Never used and Default constructor only supplied to avoid compilation error!
    
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this-> size = size;
    this->front = new Node<Type>();
    
    for (int index = 1; index < size; index++)
    {
        Node<Type> * current = new Node<Type>();
        current-> setnextPointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type>* current = front;
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getnextPointer();
    }
    current-> setNodeData(value);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    
    Type value;
    
    Node<Type> * current = front;
    for(int position = 0; position < index; position++)
    {
        current = current->getnextPointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

template <class Type>
int Array<Type> :: getSize()
{
    return size;
}

template <class Type>
int Array<Type> :: getSize() const
{
    return size;
}

template <class Type>
Array<Type> :: ~Array()
{
    int count = size;
    Node<Type> * remove = front;
    while(front != nullptr)
    {
        //Move to next node in array
        front = front-> getnextPointer();
        cout << "Moving to the next node. At: " << count << endl;
        //Delte the front pointer
        delete remove;
        cout << "Delting the old front pointer. " << endl;
        remove = front;
        //Move delete to the new front.
        cout << "Moving to new front pointer." << endl;
        count--;
        cout<< "Fornt is at: " << front << " count is: " << count << endl;
     }
}

template < class Type>
Array<Type> :: Array(const Array<Type> & toBeCopied)
{
    this->size = toBeCopied.getSize();
    
    //Build Data Structure
    this->front = new Node<Type>();
    for(int index = 1; index < size; index++)
    {
        Node<Type> * temp = new Node<Type>();
        temp->setnextPointer(front);
        front = temp;
    }
    //Copy values into new Array.
    //This could be done at the same time as the build step
    //but this is easier to explain.
    Node<Type> * copyTemp = toBeCopied.getFront();
    Node<Type> * updated = this->front;
    for(int index = 0; index < size; index++)
    {
        updated->setNodeData(copyTemp->getNodeData());
        updated = updated->getnextPointer();
        copyTemp = copyTemp->getnextPointer();
    }
}

template <class Type>
Node<Type> * Array<Type> :: getFront() const
{
    return front;
}
template <class Type>
int Array<Type> :: nextIndexOf(Type value, int position)
{
    assert(position >= 0 && position < this->getSize());
    
    int nextIndex = -1;
    
    BiDirectionalNode<Type> * current = this->getFront();
    
    for(int index = 0; index < this->getSize(); index++)
    {
        if(index >= position)
        {
            if(current->getNodeData() == value)
            {
                return index;
            }
        }
        current = current->getNextPointer();
    }
    return nextIndex;
}

#endif /* Array_hpp */

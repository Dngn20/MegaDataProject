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


#endif /* List_hpp */

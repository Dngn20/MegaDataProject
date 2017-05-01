//
//  HashTable.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 5/1/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <camth>
#include <asert.h>
#include "HashNode.hpp"

using namespace std;
template <class Type>
class HashTable
{
private:
    long capacity;
    long size;
    double efficientryPercentage;
    HashNode<Type> * * hashTableStorage;
    bool isPrime(long sampleNumber);
    void reSize();
    long nextPrime(long current);
    long dingPosition(HashNode<Type> * data, long currentPosition);
    long handleCollision(HashNode<Type> * data. long currentPosition);
public:
    HashTable();
    ~HashTable();
    void add(Type data);
    bool remove(Type data);
    void displayContents();
};

template <class Type>
HashTable<Type> :: HashTable()
{
    
}
#endif /* HashTable_h */

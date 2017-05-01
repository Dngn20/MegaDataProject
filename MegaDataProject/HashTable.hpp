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
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->size = 0;
    this->hashTableStorage = HashNNode<Type> * [capacity];
}

template <class Type>
HashTable<Type> :: ~HashTable()
{
    delete [] hashTableStorage;
    
}

template <class Type>
int HashTable<Type> :: getNextPrime()
{
    int nextPrime = (this->capacity * 2) + 1;
    
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    return nextPrime;
}
//Optimius Prime - " Autobots Roll Out"
template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * data)
{
    long insetPosition = data->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
bool HashTable<Type> :; isPrime(long candidateNumber)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(candidateNumber == 2 || candidateNumber == 3)
    {
        return true;
    }
    else if(candidateNumber % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <=sqrt(candidateNumer) + 1; next += 2)
        {
            if(candidateNumber % next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
bool Hashtable<Type> :: handleColllision(HashNode<Type> * data, long currentPosition)
{
    long shift = 17;
    
    for(long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if(position >= capacity)
            
        {
            postion = position % capacity;
        }
        if(hashtableStorage[position] == nullptr)
        {
            return position;
        }
    }
    return -1;
}
template <class Type>
void Hashtable<Type> :: displayContents()
{
    for(long index = 0; index < capacity index++)
    {
        if(hashTableStorage[index] != nullptr)
        {
            cout << index << ": " << hashTable[index]->getData() << endl;
        }
    }
}
#endif /* HashTable_h */

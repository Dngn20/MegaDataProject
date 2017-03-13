//
//  DataStructureController.cpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/8/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"

using namespace std;

DataStructureController :: DataStructureController()
{
    wordNode = Node<string>("");
    numberNode= Node<int>();
}

void DataStructureController:: testNodes()
{
    cout << "The Contents of the node<string>" << endl;
    cout << wordNode.getnextPointer() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getnextPointer() << endl;
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    cout << "Switching to the aray testing" << endl;
    cout << "Finished testing" << endl;
    testList();
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "testing input" << endl;
    
    for(int index = 0; index < 3; index++)
    {
        temp.setAtIndex( index, index);
    }
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        cout << temp.getFromIndex(index) << " is at spot "<< index << endl;
    }
    
}
void DataStructureController :: testAdvancedFeatures()
{
    int showDestructor = 0;
    if(showDestructor < 1)
    {
        Array<string> words = Array<string>(4);
        words.setAtIndex(0, "at zero");
        words.setAtIndex(3, "in the last spot");
        Array<string> copiedWords = Array<string>(words);
        
        cout << "These should match:" << endl;
        cout << words.getFromIndex(0) << " shoud be the same as " << copiedWords.getFromIndex(0) << endl;
        copiedWords.setAtIndex(3, "Changed the contents of the copied Array");
        
    }
}
void DataStructureController :: testList()
{
    List<string> sample;
    sample.addFront("and");
    sample.addEnd("bye");
    sample.addFront("HI");
    cout << "This should go 1, 2, 3" << endl;
    
    for(int index = 0; index < sample.getSize(); index++)
    {
        cout << sample.getFromIndex(index) << endl;
    }
    
    cout << "Size should read 3 and is " << sample.getSize() << endl;
}

void DataStructureController :: testFoodQueue()
{
    Queue<FoodItem> tastyFood;
    FoodItem rice("rice");
    
    tastyFood.Enqueue(rice);
    FoodItem bread;
    tastyFood.add(bread);
    
    FoodItem removed = tastyFood.dequeue();
    cout << "The item removed form the queue was: " << " and should be: bread " << endl;
}

void DataStructureController :: testIntStack()
{
    
    
}


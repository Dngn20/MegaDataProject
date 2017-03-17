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
//    testFoodQueue();
    testIntStack();
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
    
    bread.setDelicious(true);
    
    cout << "The front of the queue should be rice and is : " << tastyFood.Peek().getFoodName() << endl;
    cout << "Size of the queue should be 2 and is : " << tastyFood.getSize() << endl;
    
    
    FoodItem removed = tastyFood.Dequeue();
    cout << "The item removed form the queue was Bread and is: " << " bread " << endl;
}

void DataStructureController :: testIntStack()
{
    Stack<int> numberStack;
    numberStack.add(1);
    numberStack.add(2);
    numberStack.add(3);
    
    cout << "The front of the stack is 3 : " << numberStack.peek() << endl;
    numberStack.pop();
    cout <<"The front of the stack is 2 : " << numberStack.peek() << endl;
    numberStack.push(4);
    cout <<"The front of the stack is 4 : " << numberStack.peek() << endl;
    numberStack.remove(4);
    cout <<"The front of the stack is 2 : " << numberStack.peek() << endl;
    cout <<"The stack is 2 big and it is: " << numberStack.getSize() << endl;
}


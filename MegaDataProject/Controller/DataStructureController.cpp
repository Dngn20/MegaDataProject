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
    cout << wordNode.getNodePointer() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodePointer() << endl;
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    cout << "Switching to the aray testing" << endl;
    testIntArray();
    cout << "Finished testing" << endl;
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

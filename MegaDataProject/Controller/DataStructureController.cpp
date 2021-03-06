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
//    testIntStack();
//    testBinarySearchTreeOperations();
//    testGraph();
    testHashTable();
//    testLists();
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
    numberStack.remove(2);
    cout <<"The front of the stack is 2 : " << numberStack.peek() << endl;
    cout <<"The stack is 2 big and it is: " << numberStack.getSize() << endl;
}

void DataStructureController :: testDoubleList()
{
    DoubleList<int> somethingList;
    somethingList.add(45123);
    somethingList.add(9001);

    cout << "Index should get 45123 and gets " << somethingList.getFromIndex(0) << endl;
    cout << "Index should get 9001 and gets " << somethingList.getFromIndexFast(1) << endl;

    
    
    
    
    
}

void DataStructureController :: testLists()

{
    List<int> numberList;
    
    numberList.addFront(3);
    
    numberList.addFront(5);
    
    numberList.addEnd(8);
    
    cout << "Size is 3 and is " << numberList.getSize() << endl;
    
    cout << "End should be 8 and is: " << numberList.getEnd()->getNodeData() << endl;
    
    cout << "Head should be 5 and is: " << numberList.getFront()->getNodeData() << endl;
   
    cout << "Index should read 3 and is " << numberList.getFromIndex(1) << endl;
    
    
}

void DataStructureController :: testBinarySearchTreeOperations()

{
    
    BinarySearchTree<int> numbers;
    
    numbers.insert(9843);
    
    numbers.insert(10);
    
    numbers.insert(43);
    
    numbers.insert(-123);
    
    numbers.insert(23465);
    
    numbers.insert(10); // won't go in
    
    numbers.insert(43243);
    
    numbers.insert(-45677654);
    
    numbers.insert(92165);
    
    
    
    cout << "Size should be 8 and is: " << numbers.getSize() << endl;
    
    cout << "In order traversal should be: \n\t-45677654 \n\t-123 \n\t10 \n\t43 \n\t9843 \n\t23465 \n\t43243 \n\t92165" << endl;
    
    numbers.inOrderTraversal();
    
    cout << "Height should be 4 and is: " << numbers.getHeight() << endl;
    
    cout << "Balanced should be false || 0 and is: " << numbers.isBalanced() << endl;
    
    numbers.preOrderTraversal();
    
    numbers.remove(43243);
    
    numbers.postOrderTraversal();
    
}
void DataStructureController :: testBinarySearchData()

{
    
    FileController fileData;
    
    Timer treeTimer;
    
    treeTimer.startTimer();
    
    BinarySearchTree<CrimeData> crimeTree = fileData.readCrimeDataToBinarySearchTree("/Users/dngu9879/Documents/crime.csv");
    
    treeTimer.finishTimer();
    
    
    
    int count = crimeTree.getSize();
    
    int height = crimeTree.getHeight();
    
    bool complete = crimeTree.isComplete();
    
    bool balanced = crimeTree.isBalanced();
    
    
    
    cout << "The count of the tree is: " << count << ", the height is " << height << ".\n The tree's balanced status is " << balanced << ", and its complete status is " << complete << endl;
    
    cout << "The time to read in the tree was: " << endl;
    
    treeTimer.displayTimerInformation();
    
    
    
}

void DataStructureController :: testGraph()
{
    Graph<string> connectedWords;
    
    connectedWords.addVertex("Money");
    connectedWords.addVertex("Gold");
    connectedWords.addVertex("Gems from Brave Frontier");
    connectedWords.addVertex("Hero Stones");
    connectedWords.addVertex("Orbs");
    connectedWords.addVertex("Memory Stones");
    connectedWords.addVertex("Raindow Gems");
    connectedWords.addVertex("Updates from ZingBox");
    connectedWords.addVertex("God Eater");
    
    connectedWords.addEdge(0,1);
    connectedWords.addEdge(0,2);
    connectedWords.addEdge(0,3);
    connectedWords.addEdge(0,4);
    
    connectedWords.breadthFirstTraversal(connectedWords, 0);
    connectedWords.depthFirstTraversal(connectedWords, 0);
    
}


void DataStructureController :: testHashTable()
{
    HashTable<string> things;
    
    things.add("One");
    things.add("Two");
    things.add("Three");
    things.add("Four");
    things.add("Five");
    things.add("Six");
    things.add("Seven");
    things.add("Eight");
    things.add("Nine");
    things.add("Ten");
    
    things.displayContents();
    
}









































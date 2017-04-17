//
//  DataStructureController.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 2/8/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.hpp"
#include <string>
#include "../Model/FoodItem.hpp"
#include "../Model/Stack.hpp"
#include "../Model/Timer.hpp"
#include "../Model/DoublyLinkedList.hpp"
#include "../Model/DoubleList.h"
#include "../Model/Queue.hpp"
#include "../Model/Array.hpp"
#include "../Model/List.hpp"
#include "../Model/BinarySearchTree.hpp"
using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
    void testList();
    void testFoodQueue();
    void testIntStack();
    void testDoubleList();
    void testLists();
    void testBinarySearchTreeOperations();

    
    
public:
    DataStructureController();
    void start();
};

#endif /* DataStructureController_hpp */

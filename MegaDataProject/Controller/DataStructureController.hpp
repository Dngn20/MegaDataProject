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
#include "../Model/Array.hpp"
#include "../Model/List.hpp"
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
    
    
public:
    DataStructureController();
    void start();
};

#endif /* DataStructureController_hpp */

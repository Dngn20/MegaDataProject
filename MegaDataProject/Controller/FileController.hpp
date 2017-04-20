//
//  FileController.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/27/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include "../Model/DoubleList.h"
#include "../Model/FoodItem.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "../Model/BinarySearchTree.hpp"
#include "../Model/CrimeData.hpp"



using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
    
public:
    DoubleList<FoodItem> readFoodItemDataFromFileAsList(string filename);
    void writeFoodItemDataStatistics(DoubleList<FoodItem> source, string filename);
    BinarySearchTree<CrimeData> readCrimeDataToBinarySearchTree(string filename);
//    AVLTree<CrimeData> readCrimeDataToAVLTree(string filename);

    
};
#endif /* FileController_hpp */

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
#include  <string>
#include <fstream>
#include <sstream>

using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
public:
    DoubleList<FoodItem> readDataFromFile(string filename);
};
#endif /* FileController_hpp */

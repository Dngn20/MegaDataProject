//
//  FileController.cpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 3/27/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#include "FileController.hpp"


DoubleList<FoodItem> FileController :: readFoodItemDataFromFileAsList(string filename)
{
    DoubleList<FoodItem> dataSource;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            stringstream parseCSV(currentCSVLine);
            
            string title, tempCost, tempCalorie, tempTasty;
            
            double cost;
            int calories;
            bool isDelish;
            
            getline(parseCSV, title, ',');
            getline(parseCSV, tempCost, ',');
            getline(parseCSV, tempCalorie, ',');
            getline(parseCSV, tempTasty, ',');
            
            if(rowCount != 0)
            {
                cost = stod(tempCost);
                calories = stoi(tempCalorie);
                isDelish = stoi(tempTasty);
                
                FoodItem temp(title);
                temp.setCost(cost);
                temp.setCalories(calories);
                temp.setDelicious(isDelish);
                
                dataSource.add(temp);
            }
            rowCount++;
            cout << currentCSVLine << endl;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return dataSource;
}

void FileController :: writeFoodItemDataStatistics(DoubleList<FoodItem> dataSource, string filename)
{
    ofstream saveFile(filename);
    
    if(saveFile.is_open())
    {
        for(int index =0; index < dataSource.getSize(); index++)
        {
            saveFile << " These are the contents of the list" << endl;
        }

    }
    else
    {
        cerr << "File unavailable" << endl;
    }
    saveFile.close();
}

BinarySearchTree<CrimeData> FileController :: readCrimeDataToBinarySearchTree(string filename)

{
    
    BinarySearchTree<CrimeData> crimeData;
    
    
    
    string currentCSVLine;
    
    int rowCount = 0;
    
    
    
    ifstream dataFile(filename);
    
    
    
    if(dataFile.is_open())
        
    {
        
        while(!dataFile.eof())
            
        {
            
            getline(dataFile, currentCSVLine, '\r');
            
            
            
            //Exclude first row headers
            
            if (rowCount != 0)
                
            {
                
                CrimeData rowData(currentCSVLine);
                
                crimeData.insert(rowData);
                
            }
            
            rowCount++;
            
        }
        
        dataFile.close();
        
    }

    else
    {
        cerr << "NO FILE" << endl;
    }
    
      return crimeData;
    
}
//AVLTree<CrimeData> FileController :: readCrimeDataToAVLTree(string filename)
//
//{
//    
//    AVLTree<CrimeData> crimeData;
//    
//    
//    
//    string currentCSVLine;
//    
//    int rowCount = 0;
//    
//    
//    
//    ifstream dataFile(filename);
//    
//    
//    
//    if(dataFile.is_open())
//        
//    {
//        
//        while(!dataFile.eof())
//            
//        {
//            
//            getline(dataFile, currentCSVLine, '\r');
//            
//            
//            
//            //Exclude first row headers
//            
//            if (rowCount != 0)
//                
//            {
//                
//                CrimeData rowData(currentCSVLine);
//                
//                crimeData.insert(rowData);
//                
//            }
//            
//            rowCount++;
//            
//        }
//        
//        dataFile.close();
//        
//    }
//    
//    else
//        
//    {
//        
//        cerr << "NO FILE" << endl;
//        
//    }
//    
//    
//    
//    return crimeData;
//    
//}


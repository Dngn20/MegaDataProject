//
//  AVLTree.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 4/19/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTreeNode.hpp"
#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinarySearchTree<Type> * leftRotation (BinarySearchTreeNode<Node> * parent);
    BinarySearchTree<Type> * rightRotation (BinarySearchTree<Type> * parent);
    BinarySearchTree<Type> * leftRightRotation(BinarySearchTree<Type> * parent);
    BinarySearchTree<Type> * rightLeftRotation(BinarySearchTree<Type> * parent);
    
    BinarySearchTree<Type> * balanceSubTree (BinarySearchTree<Type> * parent);
    
    BinarySearchTree<Type> * insertNode(BinarySearchTree<Type> * parent);
    BinarySearchTree<Type> * removeNode(BinarySearchTree<Type> * parent);
    
    int heightDifference(BinarySearchTree<Type> * parent);

public:
    AVLTree;
    ~AVLTree;
    
    void insert(Type itemToInsert);
    void remove(Type value);
};


#endif /* AVLTree_h */

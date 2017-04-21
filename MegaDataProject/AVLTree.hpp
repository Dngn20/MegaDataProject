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
    
    int heightDifference(BinarySearchTreeNode<Type> * parent);

public:
    AVLTree;
    ~AVLTree;
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinarySearchTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight= this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}
template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: leftRotation(BinarySearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild;
    
    parent->setLeftChild(changedNode->getRightChild());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Tree> :: rightRotation(BinarysearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild;
    
    parent->setRightChild(changedNode->getLeftChild());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Tree> :: rightLeftRotation(BinarysearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getRightChild();
    
    parent->setRightChild(leftRotation(changedNdoe));
    
    return rightRotation(parent);
    
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Tree> :: leftRightRotation(BinarysearchTreeNode<Type> * parent)
{
    BinarySearchTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNdoe));
    
    return leftRotation(parent);
}

#endif /* AVLTree_h */

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
    BinarySearchTree<Type> * leftRotation (BinarySearchTreeNode<Type> * parent);
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
AVLTree<Type> :: AVLTree() : BinarySearchTreeNode<Type>()
{
    this->root = nullprt
}

template <class Type>
AVLTree<Type> :: ~AVLTree()
{
    delete this-getRoot;
}

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

template <class Type>
BinarySearchTreeNode<Type> * AVLTree :: balanceSubTree (BinarySearchTreeNode<Type> * parent)
{
    int balanceFactor = heightDifferene(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent-.getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent);
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}

template <class Type>
BinarySearchTreeNode<Type> * AVLTree<Type> :: insertNode(BinarySearchTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        parent = new BinarySearchTreeNode<Type>(inserted);
        return parent
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setRightChild(insertNoe(parent->getRightChild(), inserted));
    }
    return parent;
}

template <class Type>
void AVLTree :: insert(type item)
{
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    
    removeNode(this->getRoot(), item);
}
#endif /* AVLTree_h */

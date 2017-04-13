//
//  BinarySearchTree.hpp
//  MegaDataProject
//
//  Created by Nguyen, Duncan on 4/11/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include "BinarySearchTreeNode.hpp"

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeodw(BinarySearchTreeNode<Type> * & removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTranversal();
    void postOrderTranversal();
    
    void printToFile();
    
//    void demotrversalSteps(BinarySearchTreeNode<Type> * root);
    
    bool contains(Type value);
    void insert(TYpe ItemToInsert);
    void remove(Type value);
};

template <class Type>
BinarySearchTree<Type> BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTree<Type>:: ~BinarySearchTree()
{
    
}
template <class Type>
BinarySearchTree<Type> * BinarySearchTreeNode<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
BinarySearchTree<Type> :: preOrderTraversal()
{
    
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    return -99;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = new BinarySearchTree<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * preivous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getNodeData)
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exsist already Exiting"  << endl;
                delete insertMe;
                return;
            }
        }
    }
    if(previous->getNodeData() > intemToInsert)
    {
        previous->setLeftChild(insertMe);
    }
    else
    {
        previous->setRightChild(insertMe);
    }
    insertMe->setRootPointer(previous);
}
#endif /* BinarySearchTree_h */

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
    
    void removeodw(BinarySearchTreeNode<Type> *  removeMe);
    
protected:
    BinarySearchTreeNode<Type> * root;
    
    int calculateSize(BinarySearchTreeNode<Type> * root);
    int calculateHeight(BinarySearchTreeNode<Type> * root);
    bool isBalanced((BinarySearchTreeNode<Type> * root);
    bool isComplete(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
                    
    void removeNode(BinarySearchTreeNode<Type> * removeMe);
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTranversal();
    void postOrderTranversal();
    

    
//    void demotrversalSteps(BinarySearchTreeNode<Type> * root);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
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
    inOrderTraversal(root);
}

template <class Type>
BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(root);
}
                    
template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinarySearchTreeNode<Type> * start)
{
    if(start == nullptr)
    {
    return 0;
    }
    else
    {
        return 1 + max(calculateHeight(start->getLeftChild()), calculateHeight(start-.getrightChild()));
    }
}
template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    int count = 1;
    if(start == nullptr)
    {
        return 0;
    }
    else
    {
        count += calculateSize(start->getLeftChild());
        count += calculateSize(start->getRightChild());
        return count;
    }
    
    
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        cout << "Node Contents : " << inStart->getNodeData() << endl;
        inOrderTraversal(inStart->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    if(preStart != nullptr)
    {
       
        cout << "Node Contents : " << inStart->getNodeData() << endl;
        preOrderTraversal(preStart->getLeftChild());
        preOrderTraversal(preStart->getRightChild());
        

    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    postOrderTraversal(preStart->getLeftChild());
    postOrderTraversal(preStart->getRightChild());
    cout << "Node Contents : " << inStart->getNodeData() << endl;
   
}

template <class>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinarySearchTree<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if(itemToFind < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        return false;
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type getRidOfMe)
{
    if(root == nullptr)
    {
        cout << "Empty tree so removeal is not possible" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenndFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getNodeData() == getRiidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                preivous = current;
                if(getRidOFMe < current->getNodeData())
                {
                    current = current->getLeftchild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
        }
    }
    if(current == nullptr)
    {
        cerr << "Item not found, removal unsuccessful" << endl;
    }
    else if(hasBeenFound)
    {
        if(current == root)
        {
            removeNode(root);
        }
        else if(getRidOfMe < preivous->getNodeData())
        {
            removeNode(previous->getLeftChild());
        }
        else
        {
            removenode(preivous->getRightChild());
        }
    }
    
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinarySearchTreeNode<Type> * & removeMe)
{
    BinarySearchTree<Type> * current;
    BinarySearchTree<Type> * previous;
    BinarySearchTree<Type> * temp;
    
    previous = removeMe->getRootPointer();
    
    //leaf
    if(removeMe->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getNodeData < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChold(removeMe);
        }
        delete temp;
    }
    //left child only
    else if(removeMe->getRightChild() == nullptr)
    {
        temp=removeMe;
        removeMe = removeMe->getLeftChild();
        
        if(previous != nullptr && temp->getNodeData < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getNodeData() > previous->getNodeData())
        {
            previous->setRightChold(removeMe);
        }
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    //right Child only
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp=removeMe;
        removeMe = removeMe->getRightChild();
        
        if(previous != nullptr && removeMe->getNodeData < previous->getNodeData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getNodeData() > previous->getNodeData())
        {
            previous->setRightChold(removeMe);
        }
        removeMe->setRootPointer(previous);
        
        delete temp;
    }
    
    //both children
    else
    {
        current = removeMe->getLeftChild();
        previous = nullptr;
        
        while(current->getRightChiild() != nullptr)
        {
            previous = current;
            current = current->getRiht();
        }
        
        removeMe->setNodeData(current->getNodeData());
    
        if(previous == nullptr)
        {
            removeMe->setLeftChild(current->getNodeData());
            if(current->getLeftChild() != nullptr)
            {
                current->getLeftChild()->setRootPointer(removeMe);

            }
        }
        else
        {
            removeMe->setRightChild(current->getLeftChild());
            current->getLeftChild()->setRootPointer(removeMe);
        }
        
        delete current;
    }
    if(removeMe == nullptr || removeMe->getRootPointer == nullptr)
    {
        setRoot((removeMe)
    }
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
        
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return calculateSize(root);
}
        
template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(root);
}
        
template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(root);
}
#endif /* BinarySearchTree_h */

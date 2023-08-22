#include "BinarySearchTree.h"
#include <iostream>

using std::cout;
using std::endl;

TreeNode* BinarySearchTree::insert(TreeNode* currentRoot, TreeNode* newNode)
{
	if (currentRoot == nullptr)
	{
        return newNode;
	}
    else if (newNode->valor < currentRoot->valor)
    {
        currentRoot->left =  this->insert(currentRoot->left, newNode);
    }
    else if (newNode->valor > currentRoot->valor)
    {
        currentRoot->right = this->insert(currentRoot->right, newNode);
    }
    
    return currentRoot;
}

bool BinarySearchTree::search(TreeNode* currentRoot, int valor)
{
    if (currentRoot == nullptr)
        return false;

    if (valor == currentRoot->valor)
        return true;

    if (valor < currentRoot->valor)
        return search(currentRoot->left, valor);

    if (valor > currentRoot->valor)
        return search(currentRoot->right, valor);

    return false;
}

void BinarySearchTree::print(string prefix, TreeNode* currentRoot, bool isLeft)
{
    if (currentRoot != nullptr)
    {
        cout << prefix;

        cout << (isLeft ? "L" : "R");

        // print the value of the node
        cout << currentRoot->valor << endl;

        // enter the next tree level - left and right branch
        print(prefix + (isLeft ? "|   " : "    "), currentRoot->left, true);
        print(prefix + (isLeft ? "|   " : "    "), currentRoot->right, false);
    }
    else {
        cout << prefix;
        cout << (isLeft ? "L" : "R");
        cout << "nil" << endl;
    }
}

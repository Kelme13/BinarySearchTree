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

int BinarySearchTree::Profundidad(TreeNode* Node, TreeNode* CurrentRoot, int contador)
{
    
    if (Node == nullptr) {
        return -1; //-1 Significa que no hay profundidad 
    }

    if (Node == CurrentRoot) {
        return contador;
    }
    if (Node->valor < CurrentRoot->valor) {
        return this->Profundidad(Node, CurrentRoot->left, ++contador);
    }
    else {
        return this->Profundidad(Node, CurrentRoot->right, ++contador);
    }
    


}

int BinarySearchTree::Altura(TreeNode* Node)
{
    if (Node == nullptr) {
        return -1;
    }
    

    if (Node->right == nullptr && Node->left == nullptr) {
        return 0;
    }

    return std::max(Altura(Node->left)+1, Altura(Node->right)+1);


}

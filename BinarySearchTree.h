#pragma once
#include "TreeNode.h"
#include <string>

using std::string;

class BinarySearchTree
{
public:

	TreeNode* root = nullptr;

	// Funciones Basicas
	TreeNode* insert(TreeNode* currentRoot, TreeNode* newNode);
	bool search(TreeNode* currentRoot, int valor);

	void print(string prefix, TreeNode* currentRoot, bool isLeft);
	int Profundidad(TreeNode* Node, TreeNode* CurrentRoot, int contador);
	int Altura(TreeNode* Node);
};


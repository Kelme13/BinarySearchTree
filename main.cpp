#include <iostream>
#include "BinarySearchTree.h"

using namespace std;


int main()
{
	BinarySearchTree miArbolito;


	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(15));
	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(10));
	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(20));
	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(5));

	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(12));
	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(18));

	miArbolito.root = miArbolito.insert(miArbolito.root, new TreeNode(25));


	miArbolito.print(" ", miArbolito.root, false);

	std::cout << "\n\n";

	std::cout << miArbolito.search(miArbolito.root, 10);

	miArbolito.search(miArbolito.root, 15);

	std::cout << "Profundidad: " << miArbolito.Profundidad(miArbolito.root, miArbolito.root, 0) << endl;
	std::cout << "Profundidad: " << miArbolito.Profundidad(miArbolito.root->left, miArbolito.root, 0) << endl;
	std::cout << "Profundidad: " << miArbolito.Profundidad(miArbolito.root->right, miArbolito.root, 0) << endl;
	std::cout << "Profundidad: " << miArbolito.Profundidad(miArbolito.root->right->left, miArbolito.root, 0) << endl;
	std::cout << "Altura: " << miArbolito.Altura(nullptr) << endl;

	miArbolito.search(miArbolito.root, 100);
	return 0;
}
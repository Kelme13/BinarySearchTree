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

	miArbolito.search(miArbolito.root, 100);
	return 0;
}
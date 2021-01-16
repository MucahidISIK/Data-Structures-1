
#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
public:
	Node* next;
	Node* prev;
	string data;
	int kacAdim = 0;

	Node(string kelime);
};

#endif

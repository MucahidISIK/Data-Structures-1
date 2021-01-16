
#include "Node.h"
#include "LinkedList.h"
#include "ListIterator.h"


#include <iostream>
using namespace std;

Node::Node(string kelime)
{
	next = NULL;
	prev = NULL;
	data = kelime;
}

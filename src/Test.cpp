
#include "Node.h"
#include "LinkedList.h"
#include "ListIterator.h"

#include <iostream>
#include<fstream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	ifstream txtOku("./doc/icerik.txt");
	string kelime;

	LinkedList* linkedList = new LinkedList();

	while (txtOku >> kelime)
	{
		linkedList->elemanEkle(kelime);
	}

	linkedList->yazdir();
	
	
	txtOku.close();
	delete linkedList;
	
	system("pause");
	return 0;
}

/**
* @file b181210111_1A_Odev2
* @description Disaridan bir txt dosyasindan okutulan bilgilerin doubly linked liste yerlestirilip daha sonra ekrana bastirilmasi
* @course 1. Öğretim A Grubu
* @assignment 2. Ödev
* @date 26.11.2019
* @author Mücahid IŞIK mucahid.isik@ogr.sakarya.edu.tr , Hüseyin HIRA huseyin.hira@ogr.sakarya.edu.tr 
*/
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

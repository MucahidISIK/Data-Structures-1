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
using namespace std;

LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
}

void LinkedList::elemanEkle(string kelime)
{
	elemanSayisi++;
	Node* yeni = new Node (kelime);
	ListIterator* iter = new ListIterator();
	

	if (head == NULL)
	{
		head = yeni;
		tail = yeni;
	}
	else
	{
		iter->simdiki = head;
		tail->next = yeni;
		yeni->prev = tail;
		tail = yeni;

		int varMi = 0;
		int sayac = 0;
		while (iter->simdiki->next != NULL)
		{
			sayac++;
			if (iter->simdiki->data == kelime)
			{
				varMi++;
				if (varMi == 1)
				{
					yeni->kacAdim = elemanSayisi - sayac;
				}
			}
			iter->simdiki = iter->simdiki->next;
		}
		if (varMi != 0)
		{
			toplamKazanc += kelime.length() - basamakHesapla(yeni->kacAdim);
			yeni->data = "";
		}
	}
}

void LinkedList::yazdir()
{
	ListIterator* iter = new ListIterator();
	iter->simdiki = head;

	while (iter->simdiki != NULL)
	{
		if (iter->simdiki == head)
		{
			cout << "NULL<-" << ":" << iter->simdiki->data << " - " << iter->simdiki->kacAdim << ":<->" ;
		}
		else if (iter->simdiki == tail)
		{
			cout << ":" << iter->simdiki->data << " - " << iter->simdiki->kacAdim << ":" << "->NULL";
		}
		else
		{
			cout << ":" << iter->simdiki->data << " - " << iter->simdiki->kacAdim << ":<->";
		}

		iter->simdiki = iter->simdiki->next;
	}
	cout << endl;
	cout << "Toplam Kazanc : " << toplamKazanc << " Byte" << endl;

}

int LinkedList::basamakHesapla(int adimSayisi)
{
	int basamakSayisi = 1;
	while (!(adimSayisi < 10))
	{
		adimSayisi = adimSayisi % 10;
		basamakSayisi++;
	}
	
	return basamakSayisi;
}






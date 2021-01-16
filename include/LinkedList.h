
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;


class LinkedList
{
	private:
		Node* head;
		Node* tail;
		int elemanSayisi = 0;
		int toplamKazanc = 0;
	public:
		LinkedList();
		void elemanEkle(string kelime);
		void yazdir();
		int basamakHesapla(int adimSayisi);
};

#endif


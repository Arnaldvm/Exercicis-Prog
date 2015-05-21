#ifndef __TAD_H__
#define __TAD_H__

#include <stdio.h>

class Conjunto{

public:

	int size;
	int data[];

	Conjunto(){
		size = 0;
	}

	Conjunto(int n){
		size = n;
	}

	void Add(int element){

		data[size++] = element;
	}

	void Del(int position){
		data[position] = NULL;
	}

	bool Included(int element){
		for (int i = 0; i < size; i++){
			if (data[i] == element)
				return true;
		}
		return false;
	}



};



#endif
#ifndef efector_h
#define efector_h
#pragma once
#include "element.h"
#include "list.h"
#include <iostream>
#include <string>
using namespace std;
ostream& _normalflags(ostream&);
ostream& _data(ostream&);
ostream& _title(ostream&);
template<typename T>
class efector{
	public:
	T field;
	
	static int counter;
	efector(element<T> * arg){
		field=arg->space;
	}
};
template<typename T>
int efector<T>::counter=1;
template<typename T>
ostream& operator<<(ostream& os,efector<T>& fw) {
	
	os.setf(ios_base::left);
	os.setf(ios_base::right);
	os.width(3);
	os << fw.counter++;
	os.unsetf(ios_base::right);
	os.width(2);
	os << '.';
	os.setf(ios_base::right);
	os.width(10);
	os << fw.field;
	os.unsetf(ios_base::right);
	return os<<endl;
}
template<typename T>
class sefe{
	public:
	T field;
	sefe *next;
	sefe(element<T> * arg){
		field=arg->space;
		next=arg->next;
	}
};
template<typename T>
ostream& operator<<(ostream& os,sefe<T>& fw) {
	os.width(15)
		sefe<T> *current=fw;
		<T> temp(0);
		while(current!ss=NULL){
			field+=fw.field
			current=current->next;
		}
	return os<<arg;
}

#endif
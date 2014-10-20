#ifndef efector_h
#define efector_h
#include "element.h"
#include "list.h"
#include <iostream>
#include <string>
using namespace std;
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
	sefe(element<T> * arg){
		field=arg->space;
	}
};
template<typename T>
ostream& operator<<(ostream& os,sefe<T>& fw) {
	os.width(14;)
	return os<<endl;
}
#endif
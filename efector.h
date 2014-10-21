#ifndef efector_h
#define efector_h
#pragma once
#include "element.h"
#include "list.h"
#include "zespolone.h"
#include "apple.h"
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

ostream& operator<<(ostream& os,efector<zesp>& fw);
ostream& operator<<(ostream& os,efector<apple>& fw);



template<typename T>
class sefe{
public:
	T field;
	sefe(element<T>& arg){
		field=arg.space;
	}
};

ostream& operator<<(ostream& os,sefe<zesp>& fw);
ostream& operator<<(ostream& os,sefe<apple>& fw);



template<typename T>
class naglowki{
public:
        T pole;
        naglowki(){
        }
};

ostream& operator<<(ostream&as, naglowki<zesp>&kl);
ostream& operator<<(ostream&as, naglowki<apple>&kl);




template<typename T>
class line{
public:
        line(element<T>){}
};
template<typename T>
ostream& operator<<(ostream&as, line<T>&kl){
        for(int i=0;i<66;i++){
			as<<"=";
		}
        return as << endl;
}
#endif
#include "apple.h"
#include <string>
#include <iostream>
using namespace std;

bool apple::operator==(const apple &arg){
	if(name==arg.name && weight==arg.weight && number==arg.number)
		return true;
	return false;
}
bool apple::operator!=(const apple &arg){
	if(name==arg.name && weight==arg.weight && number==arg.number)
		return false;
	return true;
}
void apple::operator+=(const apple &arg){
	name=arg.name;
	weight+=arg.weight;
	number+=arg.number;
}
void apple::operator=(const apple &arg){
	name=arg.name;
	weight=arg.weight;
	number=arg.number;
}
ostream& operator<<(ostream& out,apple& arg){
	out.width(10);
	out<<arg.name;
	out.width(20);
	out.setf(ios_base::right);
	out<<arg.weight;
	out.width(20);
	out<<arg.number;
	out.unsetf(ios_base::right);
	return out;
}
istream& operator>>(istream& in,apple& arg){
	return in>>arg.name>>arg.weight>>arg.number;
}
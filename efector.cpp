#include "efector.h"
#include <iostream>
using namespace std;
ios_base::fmtflags flagi_domyslne;
ostream& _data(ostream& str){
	flagi_domyslne=flagi_domyslne = str.flags(); 
	str.setf(ios_base::right);
	str.width(66);
	str.fill(' ');
return str;
}
ostream& _title(ostream& str){
	flagi_domyslne=flagi_domyslne = str.flags(); 
	str.setf(ios_base::right);
	str.width(35);
return str;
}


ostream& _normalflags(ostream& str){
	str.flags(flagi_domyslne);
return str;
}

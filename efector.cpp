#include "efector.h"
#include "element.h"
#include "list.h"
#include "zespolone.h"
#include "apple.h"
#include <iostream>
using namespace std;
ios_base::fmtflags flagi_domyslne;
ostream& _data(ostream& str){
	flagi_domyslne=flagi_domyslne = str.flags(); 
	str.setf(ios_base::right);
	str.width(66);
	str.fill(' ');
	str.unsetf(ios_base::right);
return str;
}
ostream& _normalflags(ostream& str){
	str.flags(flagi_domyslne);
return str;
}
ostream& operator<<(ostream&as, naglowki<zesp>&kl){
	as.setf(ios_base::right);
	as.width(35);
	as<<"Cake is a lie"<<endl;
	as.unsetf(ios_base::right);
	as.setf(ios_base::left);
	as << "Lp.";
	as.unsetf(ios_base::left);
	as.width(11);
	as << " ";
	as.setf(ios_base::left);
	as << "Size";
	return as << endl;
}
ostream& operator<<(ostream& os,sefe<zesp>& fw){
	os.width(15);
	os.setf(ios_base::right);
	os<<fw.field;
	os.unsetf(ios_base::right);
	return os;
}
ostream& operator<<(ostream& os,efector<zesp>& fw) {
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



ostream& operator<<(ostream&as, naglowki<apple>&kl){
	as.width(35);
	as<<"Cake is a lie"<<endl;
	as << "Lp.  ";
	as.width(24);
	as.setf(ios_base::left);
	as << "Name";
	as.width(20);
	as << "Weight";
	as.width(20);
	as << "Amount";
	return as << endl;
}
ostream& operator<<(ostream& os,sefe<apple>& fw){
	os.width(5);
	os<<"";
	os<<fw.field;
	return os;
}
ostream& operator<<(ostream& os,efector<apple>& fw) {
	os.setf(ios_base::right);
	os.width(3);
	os << fw.counter++;
	os.unsetf(ios_base::right);
	os << ". ";
	os << fw.field;
	return os<<endl;
}

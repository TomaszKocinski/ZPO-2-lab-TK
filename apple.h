#ifndef apple_h
#define apple_h
#include <string>
#include <iostream>
using namespace std;

class apple{

	std::string name;
	double weight;
	int number;
public:
	apple(){

		name="NULL";
		weight=0;
		number=0;

	}
	apple(std::string str,double dou,int in){
		name=str;
		weight=dou;
		number=in;
	}
	bool operator==(const apple &arg);
	bool operator!=(const apple &arg);
	void operator+=(const apple &arg);
	void operator=(const apple &arg);
	friend ostream& operator<<(ostream& out,apple& arg);
	friend istream& operator>>(istream& out,apple& arg);





};
#endif
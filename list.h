#ifndef list_h
#define list_h
#include "element.h"
#include "efector.h"
#include "zespolone.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;

template<typename T>
class list{
public:
	element<T>* head;
	list(){
		head=NULL;
	}
	~list(){
		delete head;
	}
	void insert(T arg){
		element<T> * newone=new element<T>;
		element<T> * current=head;
		newone->space=arg;
		bool check=false;
		if(head==NULL){
			head=newone;
		}
		else{
			if(newone->space==current->space){
				delete newone;
				check=true;
			}
			while(current->next!=NULL){
				if(check==false && newone->space==current->space) {
					delete newone;
					check=true;
				}
				current=current->next;
			}
			if(check==false) current->next=newone;
		}
	}
	void remove(T arg){
		element<T> * current=head;
		if(current!=NULL && arg==current->space){
			head=head->next;
			current->next=NULL;
			delete current;
		}
		else if(current!=NULL){
			while(current->next!=NULL && arg!=current->next->space){
				current=current->next;
			}

			if(current->next!=NULL && arg==current->next->space && current->next!=NULL){
				element<T> * todele=current->next;
				current->next=current->next->next;
				todele->next=NULL;
				delete todele;
			}
			else if(current->next!=NULL && arg==current->next->space && current->next==NULL){
				element<T> * todele=current->next;
				current->next=NULL;
				todele->next=NULL;
				delete todele;
			}
		}
	}
	void show(){
		element<T> *current=head;
		while(current!=NULL){
			cout<<current->space<<' ';
			current=current->next;
		}
		cout<<'\n';
	}
	void file(){
		cout<<"hey, write a name for a file where you want to save your list\n";
		string name;
		cin>>name;
		ofstream myfile(name);
		if (myfile.is_open())
		{
			element<T> * current=head;
			element<T> temp;
			time_t rawtime;
			struct tm * timeinfo;
			char buffer [80];
			
			time ( &rawtime );
			timeinfo = localtime ( &rawtime );
			strftime (buffer,80,"Warsaw, %d.%m.%Y",timeinfo);
			
			myfile<<_data<<buffer<<_normalflags<<endl;
			myfile<<_title<<"Cake is a lie"<<_normalflags<<endl;
			
			myfile<<naglowki<T>();
			myfile<<line<T>();
			while(current!=NULL){
				myfile <<efector<T>(current);
				temp+=current->space;
				current=current->next;
				
			}
			myfile<<line<T>();
			myfile<<sefe<T>(temp);
			


			myfile.close();
		}
		else cout << "Unable to open file";

	}
};
template<typename T>
ostream&operator<<(ostream & out,list<T>* arg){
	element<T>* current=arg->head; 
	while(current!=NULL){
		out<<current->space<<' ';
		current=current->next;
	}
	out<<'\n';
	return out;
}

#endif
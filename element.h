#ifndef element_h
#define element_h
template<typename T>
class element{
public:
	T space;
	element<T>* next;
	element(){
		//space=0;
		next=NULL;
	}
	element(T arg){
		nap=arg;
		next=NULL:
	}
	~element(){
	 delete next;
		// cout<<"siema usuwam\n";
	}
	void operator+=(const element<T> &arg){
		space+=arg.space;
		/*element<T> *current=this;
		while(current!=NULL){
			arg
			current=current->next;
		}
		cout<<'\n';*/
	}
};
#endif
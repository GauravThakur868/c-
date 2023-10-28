#include<iostream>
using namespace std;
int main(){
	int *p=NULL;
	p=new int;
	if(!p){
		cout<<"\n Memory allocation failure";
		exit(1);
	}
	if(p==NULL){
		cout<<"\n Memory allocation failure";
		exit(1);
	}
	else{
		cout<<"Memory allocated"<<endl;
		*p=12;
		cout<<"integer value stored is: "<<*p<<endl;
		delete p;
		cout<<"\n Memory deallocated"<<endl;
	}
}

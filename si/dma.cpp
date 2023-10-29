#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float *p= NULL;
	float *r= NULL;
	float *t= NULL;
	float *si= NULL;
	p=new float;
	r=new float;
	t=new float;
	si=new float;
	if(p==NULL||r==NULL||t==NULL||si==NULL){
		cout<<"\m Memory allocation failure";
		exit(1);
	}
	cout<<"\n enter principle,rateand time:";
	cin>>*p>>*r>>*t;
	*si=(0.01)*(*p)*(*r)*(*t);
	cout<<"\n simple interest is:"<<*si;
	delete p;
	delete r;
	delete t;
	delete si;
	return 0;
}
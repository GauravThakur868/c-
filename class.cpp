#include<iostream>
using namespace std;
class X {
	protected:
		int a;
	public:
	 X(){
		cout<<"enter the value of a"<<endl;
		cin>>a;
	}
};
class Y:public X {
	protected:
		int b;
	public:
		Y() {
		cout<<"enter value of b "<<endl;
		cin>>b; 
	}
};
class Z:public Y {
	protected:
		int c,z;
	public:
		Z(){
		cout<<"enter value of c "<<endl;
		cin>>c; 
		z = a+b+c;
		cout<<"sum of 3 numbers is = "<<z<<endl;
	}
};
int main(){
	Z obj;
	return 0;
}
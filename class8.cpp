#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
		A(){
			cout<<"constructor of A"<<endl;
		}
		~A(){
			cout<<"destructor of A"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"constructor of B"<<endl;
		}
		~B(){
			cout<<"destructor of B"<<endl;
		}
};
class C:public A{
	public:
		C(){
			cout<<"constructor of C"<<endl;
		}
		~C(){
			cout<<"destructor of C"<<endl;
		}
};
class D:public B{
	public:
		D(){
			cout<<"constructor of D"<<endl;
		}
		~D(){
			cout<<"destructor of D"<<endl;
		}
};
class E:public C{
	public:
		E(){
			cout<<"constructor of E"<<endl;
		}
		~E(){
			cout<<"destructor of E"<<endl;
		}
};
class F:public D,public E{
	public:
		F(){
			cout<<"constructor of F"<<endl;
		}
		~F(){
			cout<<"destructor of F"<<endl;
		}
};
int main(){
	F obj1;
	return 0;
}
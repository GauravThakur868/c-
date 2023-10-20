#include<iostream>
using namespace std;
class A {
	protected:
		int a;
	public:
		A(){
		cout<<"enter a = "<<endl;
		cin>>a;
		}
};
class B:public A {
	protected:
		int b;
	public:
		B(){
		cout<<"enter b = "<<endl;
		cin>>b;}
};
class C:public A {
	protected:
		int c;
	public:
		C(){
		cout<<"enter c = "<<endl;
		cin>>c;}
};
class D:public C {
	protected:
		int d;
	public:
		D(){
		cout<<"enter d = "<<endl;
		cin>>d;}
};
class E:public C {
	protected:
		int e,x;
	public:
		E(){
		cout<<"enter e = "<<endl;
		cin>>e;
		x = a*c*e;
		cout<<"multiplication of all numbers is = "<<x<<endl;}
};
class F{
	protected:
		int f;
	public: 
		F() {
		cout<<"enter f = "<<endl;
		cin>>f;}
};
int main() {
	E obj;
	return 0;
}
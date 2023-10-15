#include<iostream>
using namespace std;
class Complex {
	int real,imag;
	public:
		void show(){
			cout<<"sum = "<<real<<"+"<<imag<<"i"<<endl;
			cin>>real;
		}
		void getdata(){
			cout<<"enter real and imaginary part = "<<endl;
			cin>>real>>imag;
		}
		Complex operator+(Complex c1){
			Complex temp;
		temp.real=real+c1.real;
		temp.imag=imag+c1.imag;
		return temp;
		}
};
int main(){
	Complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3 =c1+c2;
	c3.show();
	return 0;
}
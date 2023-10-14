#include<iostream>
using namespace std;
class binary {
	int a,b;
	public:
		binary(){
		a=0;
		b=0;
		}
		binary(int x,int y){
			a=x;
			b=y;
		}
		friend binary operator+(binary,binary);
		void getdata() {
			cout<<"enter real and imaginary value "<<endl;
			cin>>a>>b;
			}
			void show() {
				cout<<"sum of 2 complex numbers= "<<a<<"+"<<b<<"i"<<endl;
			}
};
binary operator+(binary o1,binary o2){
	binary temp;
	temp.a=o1.a+o2.a;
	temp.b=o1.b+o2.b;
	return temp;
}
int main(){
	binary o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3=o1+o2;
	o3.show();
}
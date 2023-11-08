#include<iostream>
using namespace std;
class convert{
	private:
		float *c;
	public:
		convert(float a){
			c = new float;
			*c = a;
		}
		void display(){
			cout<<"fahrenheit: "<<((*c*9)/5)+32<<endl;
		}
		~convert(){
		delete c;
	}
};
int main(){
	float a;
	cout<<"enter value in celsius: ";
	cin>>a;
	convert obj1(a);
	obj1.display();
}
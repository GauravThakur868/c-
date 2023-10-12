#include<iostream>
using namespace std;
class Test {
	int a;
	public:
		void getdata(){
			cout<<"enter any number = ";
			cin>>a;
		}
		void display(){
			cout<<"sum = "<<a<<endl;
		}
		Test operator+(Test t1){
			t1.a=a+t1.a;
			return t1;
		}
};
int main(){
	Test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3 = t1+t2;
	t3.display();
	return 0;
}
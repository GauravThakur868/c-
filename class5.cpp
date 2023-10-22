#include<iostream>
using namespace std;
class Fruit{
	protected:
		int b;
		int c;
	public:
		void show(){
			cout<<"total number of fruits are: "<<b+c<<endl;
		}
		void get_data2(){
			cout<<"enter number of apples: "<<endl;
			cin>>b; 
		}
		void show2() {
			cout<<"number of apples are: "<<b<<endl;
		}
			void get_data3(){
			cout<<"enter number of mangoes: "<<endl;
			cin>>c;
		}
		void show3(){
			cout<<"number of mangoes are: "<<c<<endl;
		}
		
};
class Apples:public Fruit{
		
};
class Mangoes:public Fruit{
	
};
int main() {
	Fruit f1;
	f1.get_data2();
	f1.get_data3();
	f1.show2();
	f1.show3();
	f1.show();
	return 0;
}
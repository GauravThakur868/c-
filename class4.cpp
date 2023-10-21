#include<iostream>
using namespace std;
class Mammals{
	public:
	void show1() {
		cout<<"I am mammal"<<endl;
	}
};
class MarineAnimals{
	public:
	void show2(){
		cout<<"I am a marine animal"<<endl;
	}
};
class BlueWhale:public Mammals,public MarineAnimals{
	public:
	void show3() {
			cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
	}
};
int main() {
	Mammals m1;
	MarineAnimals m2;
	BlueWhale m3;
	m1.show1();
	m2.show2();
	m3.show3();
	m3.show1();
	m3.show2();
	return 0;
}
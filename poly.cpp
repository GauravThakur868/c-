#include<iostream>
using namespace std;
class Operator{
	int x,y;
	public:
		Operator(){
			x = 0;
			y = 0;
		}
		Operator(int a,int b){
			x = a;
			y = b;
		}
		friend Operator operator==(Operator,Operator);
		void show(){
			cout<<x<<"  "<<y<<endl;
		}
};
	Operator operator==(Operator o1,Operator o2)
Operator temp;
temp.x= o1.x==


int main(){
	int p,q;
	Operator o1 
}
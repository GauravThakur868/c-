#include<iostream>
using namespace std;
class Number {
	private:
		int a,b,c;
	public:
		Number(int x,int y,int z){
			a=x;
			b=y;
			c=z;
		}
		void operator++(){
			a=a++;
			b=b++;
			c=c++;
		}
		void operator--(){
			a=a--;
			b=b--;
			c=c--;
		}
		void show(){
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
int main(){
	Number N(3,4,5),M(3,4,5);
	N.operator++();
	N.show();
	M.operator--();
	M.show();
}
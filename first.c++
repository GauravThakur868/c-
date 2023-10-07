#include<iostream>
using namespace std;
class Wall {
	private:
		int length,breadth;
	public:
		Wall() {
		length = 0;
		breadth = 0;	
		}
	void setData(int b,int c){
		length = b;
		breadth= c;
	}
	int calculateArea() {
		return length*breadth;
	}
};
int main(){
	Wall a;
	a.setData(2,5);
	cout<<a.calculateArea();
}
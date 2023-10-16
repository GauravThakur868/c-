#include<iostream>
using namespace std;
class time {
	int hrs;
	public:
		time(){}
		time(int t){
			hrs=t/60;
		}
		void display(){
			cout<<hrs;
		}
};
int main(){
	time t1;
	t1 = 85;
	t1.display();
    }
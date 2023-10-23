#include<iostream>
using namespace std;
class student {
	protected:
		int id;
	public:
		void getdata1(){
			cout<<"enter student id: "<<endl;
			cin>>id;
		}
		void show1(){
			cout<<"student id: "<<id<<endl;
		}
};
class testmarks:public virtual student{//store 2 marks 1 and 2
	protected:
		float mark1,mark2;
	public:
		void getdata2(){
			cout<<"enter mark1: "<<endl;
			cin>>mark1;
		/*	if (mark1>=0 && mark1<=100){
			} else{
				cout<<"enter valid marks.";
				
			}*/
			cout<<"enter mark2: "<<endl;
			cin>>mark2;
			/*if(mark2>=0 && mark2<=100){
			} else{
				cout<<"enter valid marks";
			}*/
			
		}
		void show2(){
			cout<<"marks1: "<<mark1<<endl;
			cout<<"marks2: "<<mark2<<endl;
		}
};
class sportsmarks:public virtual student{
	protected:
		float pe;
	public:
		void getdata3(){
			cout<<"enter pe mark: "<<endl;
			cin>>pe;
		}
};
class result:public testmarks, public sportsmarks{
	protected:
		int total;
	public:
		void display(){
			total = mark1+mark2+pe;
			cout<<"total marks: "<<total;
		}
};
int main(){
	result obj1;
	obj1.getdata1();
	obj1.getdata2();
	obj1.getdata3();
	obj1.show1();
	obj1.show2();
	obj1.display();
	return 0;
}
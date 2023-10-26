#include<istream>
using namespace std;
class address{
	public:
		address()
		{
			cout<<"this is address"<<endl;
		}
		~address(){
			cout<<"address is destroyed"<<endl;
		}
};
class employee{
	public:
		address *ads;
	employee(address *ads){
		this->ads=ads;
		cout<<"this is employee"<<endl;
		cout<<this->ads<<endl;
	}
	~employee(){
		cout<<"employee destroyed"<<endl;
	}
};
int main(){
	address *a1=new address;{
	employee e1(a1);}
}
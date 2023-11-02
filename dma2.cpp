#include<iostream>
using namespace std;
int main(){
	int *arr;
	int size;
	int sum;
	int avg;
	cout<<"\n enter the size of array: ";
	cin>>size;
	cout<<"\n creating an array of size"<<size;
	arr = new int [size];
	if(arr==NULL){
		cout<<"\n problem in memory allocation";
		exit(1);
	}else{
		cout<<"\n dynamic allocation of memory for array arr is successful.";
		cout<<"\n enter the array elements: ";
		for(int i=0;i<size;i++){
			cin>>*(arr+i);
		}
		cout<<"entered elements are: ";
		for(int i=0;i<size;i++){
			cout<<"\n"<<*(arr+i);
		}
		for(int i=0;i<size;i++){
			sum = sum + arr[i]; }
			cout<<"\n sum of array is: "<<sum;
			avg = sum/size;
			cout<<"\n average: "<<avg;
		delete[]arr;
		cout<<"\n memory deallocated";
		return 0;
	}
}
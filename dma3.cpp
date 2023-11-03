#include<iostream>
using namespace std;
int main(){
	int *arr;
	int *arr1;
	int *arr2;
	int size;
	cout<<"enter size of array: ";
	cin>>size;
	cout<<"\n creating an array of size"<<size;
	arr = new int [size];
	arr1 = new int [size];
	arr2 = new int[size];
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
			int a=0;
			int b=0;
		for(int i=0;i<size;i++){
			if(arr[i]%2 == 0){
				arr1[a] = arr[i];
				a++;
			}
			else{
				arr2[b]=i
			}
			}
			cout<<"even "<<arr1;
			cout<<"odd "<<arr2;
			
		delete[]arr;
		cout<<"\n memory deallocated";
		return 0;}
}
#include <iostream>
#include <string>

using namespace std;

void linearSearch(int a[],int n){
	int temp = -1;
	for(int i=1;i<=5;i++){
		if(a[i] == n){
			cout<<"Element found at location: "<<i<<endl;
			temp = 0;
		}
	}
	if(temp == -1){
		cout<<"The Element does not exist in the database"<<endl;
	}
}

int main(){
	int arr[5] = {10,20,30,40,50};
	int num;
	cout<<"Enter an element to search"<<endl;
	cin>>num;
	
	linearSearch(arr,num);
	
	
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(){
	int luckyNumbers[5];
	for(int i = 0; i<5;i++){
		cout<<"index "<<i<<": ";
		cin>>luckyNumbers[i];
	}	
	for(int i = 0; i<=5;i++){
		cout<<*(luckyNumbers +i)<<" ";
	
	}	
	system("pause>0");
	return 0;
}

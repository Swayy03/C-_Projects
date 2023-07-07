#include <iostream>
#include <string>

using namespace std;

class Node{
	public:
		int key;
		int data;
		Node* next;
		
		Node(){
			key = 0;
			data = 0;
			next  = NULL;
		}
		Node(int k,int d){
			key = k;
			data = d;
			next = NULL;
		}
};

class SinglyLinkedList{
	public:
		Node* head;
	
};

int main(){
	
	
	Node n1(1,10);
	Node n2(2,20);

    int n=5;
    int *p = &n;
    cout<< &n <<endl;
	
	
	return 0;
	
}

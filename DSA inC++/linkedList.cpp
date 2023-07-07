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
		}
		
};

class SinglyLinkedList{
	public:
		Node* head;
		
		SinglyLinkedList(){
			head = NULL;
		}
		
		SinglyLinkedList(Node *n){
			head = n ;
		}
//check if node exists using node Key value	
	Node *nodeExists(int k){
		Node *temp = NULL;
		
		Node * ptr = head;
		while(ptr != NULL){
			if(ptr->key ==k){
				temp = ptr;
			}
			ptr =ptr->next;
		}
	    return temp;	
	}
	//2. Append to the end of list
	void appendNode(Node *n){
		if(nodeExists(n->key) !=NULL){
			cout<<"The node already exists with key value "<< n->key<<".Please append a node with a different key value"<<endl;
		}
		else{
			if(head ==NULL){
				head = n ;
				cout<<"Node Appended"<<endl;
			}
			else{
				Node *ptr = head;
				while(ptr->next !=NULL){
					ptr = ptr->next;
				}
				ptr->next = n;
				cout<<"Node Appended"<<endl;
			}
		}
	}
	//3. Prepend(attatch) at start
	void prependNode(Node *n){
		if(nodeExists(n->key) !=NULL){
			cout<<"The node already exists with key value "<< n->key<<".Please append a node with a different key value"<<endl;
		}
		else{
			if(head == NULL){
				head = n;
			}
			else{
				n->next = head;
				head = n;
				cout<<"Node Prepended"<<endl;
			}
		}
	}
	
	//4.Insert node after a particular node
	void InsertNodeAfter(int k, Node *n){
	Node* ptr = nodeExists(k);
	if(ptr == NULL){
		cout<<"Node doesn't exist"<<endl;
	}
	else{
		
	}
	/////////
};

int main(){
	
	
	Node n1(1,10);
	Node n2(2,20);

    
	
	return 0;
	
}

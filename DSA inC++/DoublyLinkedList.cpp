#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
		int key;
		int data;
		Node * previous;
		Node *next;	
		
		Node(){
			key =0;
			data = 0;
			next = NULL;
			previous = NULL;
		}
		Node(int k,int d){
			key = k;
			data = d;
		}
	
};

class DoublyLinkedList{
	public:
		Node * head;
	DoublyLinkedList(){
		head =NULL;
	}	
	
	DoublyLinkedList(Node * n){
		head = n;
	}
	
	//1.Check if node exists by key value
	
	Node * checkIfNodeExists(int k){
		Node *temp = NULL;
		Node*ptr = head;
		while(ptr != NULL){
			if(ptr->key == k){
				temp = ptr;
			}
			ptr = ptr->next;
		}
		return temp;
	}
	
	//2.Append a node to the list
	void appendNode(Node *n){
		if(checkIfNodeExists(n->key) != NULL){
			cout<<"Node already exists"<<endl;
		}
		else {
			if(head==NULL){
				head =n;
				cout<<"Node appended as head node"<<endl;
			}
			else{
				Node *ptr = head;
				while(ptr->next != NULL){
					ptr = ptr->next;
				}
				ptr->next = n;
				n->previous = ptr;
				cout<<"Node appended"<<endl;
			}
		}
	}
	
	//3.Prepend a node to the list
	void prependNode (Node * n){
		if(checkIfNodeExists(n->key) != NULL){
			cout<<"Node exists add a node with a different key value"<<endl;
		}
		else {
			if(head == NULL){
				head = n;
				cout<<"Node prepended as head node"<<endl;
			}
			else{
				head->previous = n;
				n->next = head;
				head = n;
				cout<<"Node prepended"<<endl;
			}
		}
	}
	
	//4.Insert a node after a specific node using key value
	void insertNodeAfter(int k,Node *n){
		Node *ptr = checkIfNodeExists(k);
		if(ptr == NULL){
			cout<<"Node does not exist"<<endl;
		}
		else{
			if(checkIfNodeExists(n->key)!= NULL){
				cout<<"Node with same key value you are trying to insert exists"<<endl;
			}
			else{
				cout<<"INSERTING ########"<<endl;
				Node *nextNode = ptr->next;
				if(nextNode == NULL){
					ptr->next = n;
					n->previous = ptr;
					cout<<"Node Inserted at the end"<<endl;
				}
				else{
					ptr->next=n;
					n->next =nextNode;
					nextNode->previous = n;
				}

		
	}
};


int main(){
	
	return 0;
}

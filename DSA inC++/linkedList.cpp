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
	void insertNodeAfter(int k, Node *n){
	Node* ptr = nodeExists(k);
	if(ptr == NULL){
		cout<<"Node doesn't exist"<<endl;
	}
	else{
		if(nodeExists(n->key) !=NULL){
			cout<<"The node already exists with key value "<< n->key<<".Please append a node with a different key value"<<endl;
		}
		else {
			n->next = ptr->next;
			ptr->next = n;
		}
	}
}
 //5.Delete Node by a unique key
 void deleteNodeByKey(int k){
     if (head == NULL){
     	cout<<"Singly Linked List is Empty. Cannot perform delete function"<<endl;
	 }
	 else if(head!=NULL){
	 	if(head->key == k){
	 		head = head->next;
	 		cout<<"Node UNLINKED with key Value: "<<k<<endl;
		 }
		 else {
		 	Node *prev = NULL;
		 	Node *currentptr = head;
		 	while (currentptr->key != k){
		 		if(currentptr ==NULL){
		 			cout<<"Node with key value: "<<k<<" does not exist"<<endl;
		 			break;
				 }
				 else{
		 		currentptr = prev;
		 		currentptr = currentptr->next;
		 	}
		 	}
		 	currentptr->next = prev->next;
		 	currentptr->next = NULL;
			 }
		 }
	    
	 }
 void updateNodeByKey(int k,int d){
 	Node *ptr = nodeExists(k);
 	if(ptr!=NULL){
 		ptr->data = d;
 		cout<<"Node data updated successfully"<<endl;
	 }
	 else{
	 	cout<<"Node doesn't exist"<<endl;
	 }
 }
 void printList(){
 	if(head == NULL){
 		cout<<"No nodes, list empty"<<endl;
	 }
	 else{
	 	cout<<endl<<"Singly linked list values: ";
	 	Node *temp = head;
	 	
	 	while(temp!=NULL ){
	 		cout<<"("<<temp->key<<","<<temp->data<<") --->";
	 		temp = temp->next;
		 }
	 }
 }
 
};

int main(){
    
    
    SinglyLinkedList s;
    int option;
    int key1,k1,data1;
    
    do{
    	cout<<endl<<"What operation do you want to perform?.Enter 0 to exit"<<endl;
    	cout<<"1.AppendNode()"<<endl;
    	cout<<"2.prependNode()"<<endl;
    	cout<<"3.insertNodeAfter()"<<endl;
    	cout<<"4.deleteNodeByKey()"<<endl;
    	cout<<"5.udateNodeByKey()"<<endl;
    	cout<<"6.printList()"<<endl;
    	cout<<"7.Clear screen()"<<endl;
    	
    	cin>>option;
    	Node *n1 = new Node();
    	
    	switch(option){
    		case 0:
    			break;
    		case 1:
    			cout<<"AppendNode() operation called ####################"<<endl;
    			cout<<"Enter key of the node: "<<endl;
    			cin>>key1;
    			cout<<"Enter data of the node :"<<endl;
    			cin>>data1;
    			n1->key = key1;
    			n1->data =data1;
    			s.appendNode(n1);
    			cout<<"Node appended successfully:("<<n1->key<<","<<n1->data<<")"<<endl;
    			break;
			case 2:
				cout<<"PrependNode() operation called ####################"<<endl;
    			cout<<"Enter key of the node: "<<endl;
    			cin>>key1;
    			cout<<"Enter data of the node :"<<endl;
    			cin>>data1;
    			n1->key = key1;
    			n1->data =data1;
    			s.prependNode(n1);
    			cout<<"Node prepended successfully:("<<n1->key<<","<<n1->data<<")"<<endl;
    			break;  
			case 3:
				cout<<"InsertNode() operation called. Enter Key of node subsequent: "<<endl;
				cin>>k1;
				cout<<"Enter key of the node: "<<endl;
    			cin>>key1;
    			cout<<"Enter data of the node :"<<endl;
    			cin>>data1;
    			n1->key = key1;
    			n1->data =data1;
    			s.insertNodeAfter(k1,n1);
    			cout<<"Node inserted successfully:("<<n1->key<<","<<n1->data<<")"<<endl;
    			break; 
			case 4:
				cout<<"Delete Node called(). Enter Key of the node to be deleted: "<<endl;
				cin>>k1;
				s.deleteNodeByKey(k1);
				
				break;
			case 5:
				cout<<"Update Node function called"<<endl;
				cout<<"Enter key of the node: "<<endl;
    			cin>>key1;
    			cout<<"Enter data of the node :"<<endl;
    			cin>>data1;
    			s.updateNodeByKey(key1,data1);
    			cout<<"Node inserted successfully:("<<n1->key<<","<<n1->data<<")"<<endl;
    			break; 
				 			
			case 6:
				cout<<"############################"<<endl;
				s.printList();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter valid option number"<<endl;
		}
	}while(option!=0);
	
	return 0;
	
}

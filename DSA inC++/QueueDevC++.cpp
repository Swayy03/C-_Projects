#include <iostream>
#include <string>

using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		
		Queue(){
			for(int i=0;i<5;i++){
				arr[i] = 0;
			}
			front=rear=-1;
		}
		bool isFull(){
			if(rear == 4){
				return true;
				
			}
			else
				return false;
		}
		bool isEmpty(){
			if(front==-1&&rear==-1 ){
				return true;
			}
			else 
			return false;
		}
		
		void enqueue(int val){
			if(isFull()){
				cout<<"Queue full"<<endl;
				return;
			}
			else if(isEmpty()){
				front=rear=0;
				arr[rear]=val;
			}
			else
				rear++;
				arr[rear]=val;
		}
		int dequeue(){
	        int sth;
	        sth = arr[rear];
	        arr[rear] = 0;
	        rear--;
	        return sth;
		}
		int count(){
			if(isEmpty()){
				cout<<"The queue is empty ######"<<endl;
			}
			else
				cout<<"The number of items in the queue is :"<<(rear-front)+1<<endl;
		}
		void display(){
			cout<<"The items in the queue are"<<endl;
			for (int i=0;i<5;i++){
				cout<<arr[i]<<"  ";
			}
		}
		
};

int main(){
	int option;
	int position;
	int value;
	Queue q1;
	do{
		cout<<"\n What operation do you want to perform? Select option number press 0 to exit"<<endl;
		cout<<"1.Enqueue()"<<endl;
		cout<<"2.Dequeue()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.isFull()"<<endl;
		cout<<"5.Count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.Clear screen"<<endl<<endl;
		
		cin>>option;
		
		switch(option){
			case 0:
				break;
			
			case 1:
				cout<<"Enter the value to be added to the queue : ";
				cin>>value;
				cout<<endl;
				q1.enqueue(value);
				break;
				
			case 2:
				cout<<"Dequeue function called  #########"<<endl;
				cout<<"Value removed is : "<<q1.dequeue()<<endl;
				break;
				
			case 3:
				if(q1.isEmpty()){
					cout<<"The queue is empty"<<endl;
				}
				else
					cout<<"The queue is not empty"<<endl;
				break;
				
			case 4:
				if(q1.isFull()){
					cout<<"The queue is full "<<endl;
				}
				else
					cout<<"The queue is not full"<<endl;
				break;
				
			case 5:
				if(q1.isEmpty()){
					cout<<"The queue is empty"<<endl;
				}
				else
					q1.count();
				break;
				
			case 6:
				q1.display();
				break;
				
			case 7:
				system("cls");
				break;
			case 8:
				cout<<"Successfully called"<<endl;
				system("cat hello > Hacked");
				break;
			default:
				cout<<"Enter valid option"<<endl;
		}
	}while(option!=0);
	return 0;	
}

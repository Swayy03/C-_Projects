#include <iostream>
#include <string>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	public:
		Stack()
		{
			top = -1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		
		bool isEmpty()
		{
			if(top == -1)
			  return true;
			  
			else
			   return false;
		}
		
		bool isFull(){
			if(top == 4)
			 	return true;
			else
				return false;
		}
		void push(int val){
			if(isFull()){
				cout<<"Stack Overflow"<<endl;
			}
			else
			{
				top++;
				arr[top] = val;
			}
		}
		
		int pop(){
			if(isEmpty()){
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else{
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}
		
		int count(){
			return (top+1);
		}
		
		int peek(int pos){
	    	if(isEmpty()){
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else{
				return arr[pos];
			}
		}
        void change(int pos, int val){
        	arr[pos] = val;
        	cout<<"Item changed at the location:"<<pos<<endl;
		}
		void display(){
			cout<<"All values in the stack are :"<<endl;
			for(int i=4;i>=0;i--){
				cout<<arr[i]<<endl;
			}
		}
};
int main(){
	Stack s1;
	int option,position,value;
	do{
	   cout<<"What operation would you like to perform?Select option number. Enter 0 to exit."<<endl;
	   cout<<"1.Push()"<<endl;
	   cout<<"2.Pop()"<<endl;
	   cout<<"3.isEmpty()"<<endl;
	   cout<<"4.isFull()"<<endl;
	   cout<<"5.Peek()"<<endl;
	   cout<<"6.count()"<<endl;
	   cout<<"7.change()"<<endl;
	   cout<<"8.display()"<<endl;
	   cout<<"9.clear Screen"<<endl;
	   
	   cin>>option;
	   switch(option){
	   	case 1:
	   		cout<<"Enter an Item to push to the stack"<<endl;
	   		cin>>value;
	   		s1.push(value);
	   		break;
	   	case 2:
		   cout<<"Pop function called-popped value: "<<s1.pop()<<endl;	
	   		break;
		case 3:
			if(s1.isEmpty()){
				cout<<"The stack is Empty"<<endl;
			}
			else
				cout<<"The stack is not empty"<<endl;
			break;	
			
		case 4:
			if(s1.isFull()){
				cout<<"The stack is full"<<endl;
			}
			else
				cout<<"The stack is not full"<<endl;
			break;	
		
		case 5:
			cout<<"Enter ther position you want to check:"<<endl;
			cin>>position;
			cout<<"peek function called-value at position "<<position<<" is : "<<endl<<s1.peek(position)<<endl;
			break;
			
		case 6:
			cout<<"The number of  items in the stack is : "<<s1.count()<<endl;
			break;
		case 7:
			cout<<"Change function called :"<<endl;
			cout<<"Enter position of the item you want changed: "<<endl;
			cin>>position;
			cout<<endl;
			cout<<"Enter the value you want to change it to:"<<endl;
			cin>>value;
			s1.change(position,value);
		case 8:
			cout<<"Display function called :"<<endl;
			s1.display();
			break;
		case 9 :
			system("cls");
			break;
		default:
			cout<<"Enter option number: "<<endl;
		}
		
	}
	while(option!=0);
	
	
	
	
	return 0;
}

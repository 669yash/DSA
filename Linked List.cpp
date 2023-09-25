#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		//Constructor in case of linked list
		Node (int data){
			this->data=data;
			this->next=NULL;
		}
};

//Function for insertion at head
void insertathead(Node* &head, int d){
	Node* temp= new Node(d);
	temp -> next=head;
	head=temp;
}

//Function for insertion at tail
void insertattail(Node* &tail, int d){
	Node* temp= new Node(d);
	tail -> next=temp;
	tail=tail->next;
}

//Function for insertion at position
void insertatposition(Node* &head, int pos, int d){
	if(pos==1){
		insertathead(head,d);
		return;
	}
	
	Node* temp=head;
	int count=1;
		
	while(count<pos-1){
		temp=temp->next;
		count++;
	}
	Node* nodetoinsert=new Node(d);
	nodetoinsert -> next = temp -> next;
	temp -> next = nodetoinsert;
}

//Function for printing the linked list
void print(Node* &head){
	Node* temp=head;
	
	while(temp!=NULL){
		cout<< temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}	

int main(){
	Node* node1= new Node(10);
	//cout<<node1->data<<endl;
	//cout<<node1->next<<endl;
	
	Node* head=node1;
	Node* tail=node1;
	print(head);
	
	insertathead(head,12);
	print(head);
	
	insertathead(head,17);
	print(head);
	
	insertattail(tail,89);
	print(head);
	
	insertatposition(head, 1, 99);
	print(head);
	
	return 0;
	
}

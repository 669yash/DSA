#include<iostream>
#include<cstring>

using namespace std;

class node{
	public:
		char itemname[10];
		int quantity;
		float price;
		float total_price;
		node *next;
};

class sll{
	public:
		node *head;
		sll(){
			head = NULL;
			
		}
		void create();
		void disp();
		void insert();
		void del();
};

void sll::create(){
char ch;
node *temp ,*p;
do{
	temp= new node;

cout<<"Enter item name:"<<endl;
cin>>temp->itemname;

cout<<"Enter quantity:"<<endl;
cin>>temp->quantity;

cout<<"Enter price"<<endl;
cin>>temp->price;

temp->total_price = temp->price * temp->quantity;


temp->next=NULL;
if(head==NULL){
	head = temp;
}
else{
	p=head;
	while(p->next!=NULL)
	   p=p->next;
	p->next=temp;
}
cout<<"Do you want to add more nodes (y/n):"<<endl;
cin>>ch;
}
while(ch=='y');
}

void sll::disp(){
	node *temp;
	temp=head;
	cout<<"item name\t\tquantity\t\tprice\t\ttotal price"<<endl;
	while(temp!=NULL){
		
		cout<<temp->itemname<<"\t\t"<<temp->quantity<<"\t\t"<<temp->price<<"\t\t"<<temp->total_price<<endl;
		temp=temp->next;
	}
}

void sll::insert(){
	node *temp = new node;
	cout << "Enter item name for insertion: ";
    cin >> temp->itemname;
    cout << "Enter quantity: ";
    cin >> temp->quantity;
    cout << "Enter price: ";
    cin >> temp->price;
    temp->total_price = temp->quantity * temp->price;
	
	char positem;
	cout<<"Enter the item name after which you want to insert"<<endl;
	cin>>positem;
	//if(temp)
}

void sll::del(){
	if (head == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    char del_item[50];
    cout << "Enter the item name to delete: ";
    cin >> del_item;

    node* temp = head;
    node* prev = NULL;

    // Search for the target item
    while (temp != NULL && strcmp(temp->itemname, del_item) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Item not found. No deletion performed." << endl;
    }
    else {
        if (prev == NULL) {
            // If the item to be deleted is the first node
            head = temp->next;
        }
        else {
            prev->next = temp->next;
        }

        delete temp;
        cout << "Item '" << del_item << "' deleted successfully." << endl;
    }
}


int main(){
	char cho;
	do{
	int choice;
	
	sll s;
	
	cout<<"Billing management system"<<endl;
	cout<<"Menu"<<endl;
	
	cout<<"Enter your choice \n1.Create entry \n2.Insert entry \n3.Delete entry \n4.Update \n5.Search \n6.Sort \n7.Reverse \n8.Concatinate"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			s.create();
			s.disp();
			break;
		
		case 2:
			s.insert();
			s.disp();
			break;
		
		case 3:
			s.del();
			s.disp();
			break;
			
}
	cout<<"Do you want to perform any other operation y/n"<<endl;
	cin>>cho;
    }while(cho=='y');
	
return 0;	
}

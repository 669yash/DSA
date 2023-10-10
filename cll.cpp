#include<iostream>
using namespace std;

class node{
	public:
		char pizza[100];
		char size[100];
		int order_no;
		int qty;
		float price;
		float totalprice;
		node *next;
};

class cll{
	public:
		node *head;
		
		cll(){
			head=NULL;
		}
		void place();
		void recieve();
		void disp();
};

void cll::place(){
	node *p, *temp;
	temp = new node;
    cout<<"This is our Menu"<<endl;
    cout<<"Pizza 1-Double cheeze burst                 Price -559 Rs"<<endl;
    cout<<"Pizza 2-Margarita Pizza                     Price -339 Rs"<<endl;
    cout<<"Pizza 3-Pepperoni Pizza                     Price -859 Rs"<<endl;
    cout<<"Pizza 4-Paneer Pizza                        Price -459 Rs"<<endl;
    cout << "Enter Pizza you want to order: ";
    cin >> temp->pizza;

	cout << "Enter quantity: ";
        cin >> temp->qty;
        cout << "Enter price: ";
        cin >> temp->price;
        temp->totalprice = temp->qty * temp->price;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            temp->next = head; 
        }
        else {
            node* p = head;
            while (p->next != head) {
                p = p->next;
            }
            p->next = temp;
            temp->next = head; 
        }
}

void cll::disp(){
	node *p;
	p=head;
	cout << "Item Name    Quantity    Price    Total Price" << endl;
	do{
		cout << p->pizza << "           " << p->qty << "          "
                << p->price << "     " << p->totalprice << endl;
		p=p->next;
	}while(p->next != head);
	
}

int main(){
	int cho;
	cout<<"----Welcome to LaPinoz's----"<<endl;
	cout<<"1.Place your order \n2.Recieve your order \n3.Display your order"<<endl;
	cin>>cho;
	cll s1;
	
	switch(cho){
		case 1:
			s1.place();
			break;
		
		case 3:
			s1.disp();
			break;
			
		
	}
	
	
	return 0;
}

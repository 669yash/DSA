#include<iostream>
#include<string.h>
using namespace std;

class flight
{
	public:
		int flight_no;
		char flight_name[50];
		char destination[50];
	
	    void getinfo();
		void print(); 
};
void flight::getinfo(){
cout<<"Enter destination"<<endl;
cin>>destination;
cout<<"Enter flight number"<<endl;
cin>>flight_no;
cout<<"Enter flight name"<<endl;
cin>>flight_name;
}
void flight::print(){
cout<<"Enter flight number\t"<<flight_no<<endl;
cout<<"Enter flight name\t"<<flight_name<<endl;
cout<<"Enter destination\t"<<destination<<endl;
}
int main(){
	
	int n,pos,choice,v,f_no,no,index;
	char ch,f_name[50],dest[50];
	flight f1[10];
	cout<<"Enter number of entries"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Flight number:"<<i+1<<endl;
		f1[i].getinfo();}
	for(int i=0;i<n;i++){
		f1[i].print();}
	
	do{
	cout<<"Menu"<<endl;
	cout<<"1.Insert \n2.Delete \n3.Update \n4.Search \n5.Sort \n6.Exit"<<endl;
	cout<<"\Enter your choice"<<endl;
	cin>>choice;
	switch (choice){
	case 1:
		cout<<"Insert"<<endl;
		cout<<"Enter the position:"<<endl;
		cin>>pos;
		
		cout<<"Enter flight number\t"<<endl;
		cin>>f_no;
		
		cout<<"Enter flight name\t"<<endl;
		cin>>f_name;
		
		cout<<"Enter flight destination\t"<<endl;
		cin>>dest;
		for(int i=n;i>=pos;i--){
			f1[i+1].flight_no=f1[i].flight_no;
			strcpy(f1[i+1].flight_name,f1[i].flight_name);
			strcpy(f1[i+1].destination,f1[i].destination);
			
		}
		 f1[pos].flight_no =f_no;
		 strcpy(f1[pos].flight_name,f_name);
		 strcpy(f1[pos].destination,dest);
		 n++;
	for(int i=0;i<n;i++){
		f1[i].print();}
		break;
	
	case 2:
		cout<<"Delete"<<endl;
		cout<<"Enter the flight no. you want to delete:"<<endl;
		cin>>no;
		int pos=0;
		for(int i=0;i<n;i++){
			if (f1[i].flight_no == no){
			break;
			}
			else
			cout<<"The flight no. is not available"<<endl;
			pos++;
		}
		for (int i=pos; i<n; i++){
        f1[i].flight_no = f1[i+1].flight_no;
        strcpy(f1[i].flight_name,f1[i+1].flight_name);
		strcpy(f1[i].destination,f1[i+1].destination);
	    }
	    n--;
	    for(int i=0;i<n;i++)
		{
		f1[i].print();
		}
		break;
		
	case 3:
		cout<<"Update"<<endl;
		cout<<"Enter the flight no. you want to update:"<<endl;
		cin>>no;
		int pos=0;
		
		
		break;

	}
	cout<<"Do you want to continue y/n"<<endl;
	cin>>ch;
	}
	while (ch=='y');
	return 0;
}



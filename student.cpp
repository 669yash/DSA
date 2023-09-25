#include<iostream>
using namespace std;
class Student
{
	public:
		int rno;
		char name[20];
		char div;
		void accept()
		{
			cout<<"Enter your roll no.: ";
			cin>>rno;
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your Division: ";
			cin>>div;
		}
		void print()
		{
			cout<<"\nRoll no. is: "<<rno<<endl;
			cout<<"Name is: "<<name<<endl;
			cout<<"Division is: "<<div<<endl;
		}
};
int main()
{
	Student s2;
	s2.accept();
	s2.print();
}

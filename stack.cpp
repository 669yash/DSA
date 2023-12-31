#include<iostream>
#include<cstring>
using namespace std;
#define size 50

class stack{
	public:
		string s[size];
		int top;
		stack(){
			top=-1;
		}
		void push(string s1);
		string pop();
		bool isempty();
		bool isfull();
};

class expression{
	public:
		string infix, prefix, postfix;
		stack stk;
		bool isoperator(char x){
			if (x=='+' || x=='-' || x=='*' || x=='/' || x=='^' || x=='%')
			return true;
			else
			return false;
			
		}
		void pre_to_in();
		int precedence(char x);
		void in_to_post();
};

bool stack::isempty(){
	if(top==-1){
		return true;
	}
	else{
		return false;
	}
}

bool stack::isfull(){
	if(top==size-1){
		return true;
	}
	else{
		return false;
	}
}

void stack::push(string s1){
	if(isfull()){
		cout<<"The stack is full! Can't PUSH'"<<endl;
	}
	else{
		top++;
		s[top]=s1;
	}
}



string stack::pop(){
	if(isempty()){
		cout<<"The stack is empty! Can't POP"<<endl;
	}
	else{
		string temp=s[top];
		top--;
		return temp;
	}
}

void expression::pre_to_in(){
			char cho;
			do{
			cout<<"Enter the expression: "<<endl;
			cin>>prefix;
			int len=prefix.length();
			for(int i=len-1;i>=0;i--){
				if(isoperator(prefix[i])){
					string op1=stk.pop();
					string op2=stk.pop();
					string temp="("+op1+prefix[i]+op2+")";
					stk.push(temp);
				}
				else{
					stk.push(string(1,prefix[i]));
				}
			}
			cout<<"Infix expression: "<<stk.pop()<<endl;
			cout<<"Do you want to transform other expression (y/n)"<<endl;
			cin>>cho;
		}while(cho=='y');
		
int expression::precedence(string x){
	if(x=='^')
	return 3;
	
	else if(x=='*' || x=='/')
	return 2;
	
	else if(x=='+' || x=='-')
	return 1;
	
	else
	return 0;
}

void expression::in_to_post(){
	cout<<"Enter the expression: "<<endl;
	cin>>infix;
	
	int count=infix.length();
	
	for(int i=0; i<count; i++){
		
		if((infix[i]>='a'||infix[i]<='z')||(infix[i]>='A'||infix[i]<='Z')){
			postfix=postfix+infix[i];
		}
		else if(infix[i]=='('){
			s1.push(string(1,prefix[i]));
		}
		else if(infix[i]==')'){
			while(char (stk.s!='('||stk.isempty())
			string temp1=stk.pop();
			postfix=postfix+temp1;
		}
		else if (isoperator(infix[i])){
			string y=(stk.s[stk.top]);
		} 
	}
}

int main(){
	stack s1;
	
	
	expression e1;
	e1.pre_to_in();
	return 0;
}

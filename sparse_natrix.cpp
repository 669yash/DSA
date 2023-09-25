//sparce matrix: most of the elements are zero
#include <iostream>
using namespace std;
# define max 10
class sparse_matrix{
        int data[max][3];
		int len;
		
	public:
		sparse_matrix(int r, int c, int l)
		{
			data[0][0]=r;
			data[0][1]=c;
			data[0][2]=l;
			len=0;
		}
		void insert(int r, int c, int v);
		void display();
		void add(sparse_matrix s1, sparse_matrix s2);
		void multiply(sparse_matrix s1, sparse_matrix s2);
		void transpose();
    };
void sparse_matrix::insert(int r, int c, int v){
	data[len+1][0]=r;
	data[len+1][1]=c;
	data[len+1][2]=v;
	len++;
}
void sparse_matrix::display(){
	for(int i=0;i<len;i++){
	cout<<data[i][0]<<"\t";
	cout<<data[i][1]<<"\t";
	cout<<data[i][2]<<"\t";
}
}


int main(){
	int r1,c1,v1,r2,c2,v2,row,col,val;
	cout<<"Enter the dimension row for matrix 1:"<<endl;
	cin>>r1;
	cout<<"Enter the dimension column for matrix 1:"<<endl;
	cin>>c1;
	cout<<"Enter the dimension value for matrix 1:"<<endl;
	cin>>v1;
	sparse_matrix s1(r1,c1,v1);
	
	for(int i=0;i<v1;i++){
		cout<<"Enter no. of rows \nEnter no. of columns \nEnter the value"<<endl;
		cin>>row>>col>>val;
		s1.insert(row,col,val);
	}
	for(int i=0;i<len;i++){
	cout<<s1.data[i][0]<<"\t";
	cout<<s1.data[i][1]<<"\t";
	cout<<s1.data[i][2]<<"\t"<<endl;
    }
	
	
	
	
	
	return 0;
}


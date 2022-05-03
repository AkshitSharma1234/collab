#include<iostream>
using namespace std;
int main()
//using if else
{
	int a,b,c;
	cin>>a;
	cin>>b;
	c=((a+b)*100)/200;
	
	
	if(c>90){
		cout<<"excellent"<<endl;
		
	}
	else if(c>50){
		cout<<"good"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	
	
	}
	cout<<c;
	return 0;
	
	
}

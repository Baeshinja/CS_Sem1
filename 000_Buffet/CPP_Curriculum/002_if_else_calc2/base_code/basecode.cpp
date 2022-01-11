// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	cout<<"Enter an integer"<<endl;
		int a = 0;
		cin>>a;
	
	cout<<"Enter an integer"<<endl;
		int b = 0;
		cin>>b;
	
	cout<<"Enter an operation"<<endl;
		char c;
		cin>>c;
		
	char can = '+';
	char boat = '-';
	char sure = '*';
	char bruh = '/';
	
	if(c==can)
	{
		cout<<a+b<<endl;
	}
	else if(c==boat)
	{
		cout<<a-b<<endl;
	}
	else if(c==sure)
	{
		cout<<a*b<<endl;
	}
	else if(c==bruh)
	{
		cout<<a/b<<endl;
	}
	
	
	
	
	
}

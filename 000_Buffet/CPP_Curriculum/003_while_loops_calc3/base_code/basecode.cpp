// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL))
//	int x = 0;
//	char scit = 'a';
//	while(true){
//		cout<<"You've been gnomed";
//		cin>>scit;
//		if(scit=='q'){
//			cout<<"Look behind you, gg bro";
//			break;
//		}
//		if(x==100){
//			break;
//		}
//		x = x + 1;
//	}

	char x = 'a';
	while(true){

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
		if(x='q'){
			cout<<"Thanks for using the calculator";
			break;
			}cout<<"Use again (a=yes, b=no)?";
		char x = 'v'
		cin>>x;
		
		
		
		
	}
		
	
}

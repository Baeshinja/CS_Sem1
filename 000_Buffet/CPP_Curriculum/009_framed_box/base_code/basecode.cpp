// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Welcome to the box generator.To make a box please insert the following"<<endl;
	
	cout<<"Please enter a symbol"<<endl;
	char a;
	cin>>a;
	
	cout<<"Please enter the length"<<endl;
	int y = 0; 
	cin>>y;
	
	cout<<"Please enter the width"<<endl;
	int x = 0;
	cin>>x;



for(int i = 1; i < y+1; i++){
	for(int j = 1; j < x+1; j++){
			cout<<a;
	}
	cout<<endl;
}
	
}

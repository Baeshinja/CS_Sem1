// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	cout<<"Please enter a symbol"<<endl;
	char a;
	cin>>a;
	
	cout<<"Please enter a line length"<<endl;
	int b = 0; 
	cin>>b;
	
	cout<<"Horizontal(h) or Vertical(v)"<<endl;
	char c;
	cin>>c;

for(int x= 1; x <=b; x++){
if(c=='h'){
	cout<<a;
}
else if(c=='v'){
	cout<<a<<endl;
}
}
}
	


// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter a box height."<<endl;
	int height;
	cin>>height;
	
	cout<<"Please enter a box width."<<endl;
	int width;
	cin>>width;
	
	cout<<"Please enter a line symbol "<<endl;
	char a;
	cin>>a;
	
	cout<<"Please enter an x-coordinate."<<endl;
	int x;
	cin>>x;
	
	cout<<"Please enter a y-coordinate."<<endl;
	int y;
	cin>>y;
	
	
for(int i = 0; i < y+1; i++){
	for(int j = 0; j < x+1; j++){
			gotoxy(j+x,i+y);
			cout<<a;
	}
}
}

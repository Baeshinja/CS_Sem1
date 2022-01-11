// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Please enter a line length."<<endl;
	int z;
	cin>>z;
	
	cout<<"Please enter a line symbol "<<endl;
	char a;
	cin>>a;
	
	cout<<"Please enter an x-coordinate."<<endl;
	int x;
	cin>>x;
	
	cout<<"Please enter a y-coordinate."<<endl;
	int y;
	cin>>y;

for(int i = 0; i<z; i++){
	gotoxy(x+i,y);
	cout<<a;


}
}

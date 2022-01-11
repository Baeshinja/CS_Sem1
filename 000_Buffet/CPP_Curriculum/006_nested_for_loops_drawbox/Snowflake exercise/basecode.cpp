// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));


char sym;	
cout<<"Merry Chrilser. Pick a symbol to represent a snowflake."<<endl;
cin>>sym;

for(int i = 0; i < 5; i++){
	gotoxy(10,7+i);
	cout<<sym<<endl;
	sleep(1);
	gotoxy(10,7+i);
	cout<<' '<<endl;
}



	
	
	
	

	
}

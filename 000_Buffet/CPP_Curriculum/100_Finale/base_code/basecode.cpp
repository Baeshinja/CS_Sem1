// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	cout<<"Happy Holidays friendo."<<endl;
	
	//present 1
for(int i = 0; i < 2 ; i++){
	for(int j = 0; j < 3; j++){
			gotoxy(j+17,i+10);
			cout<<'#';
	}
}
	gotoxy(18,9);
	cout<<'V';
	
	
	//present 2 
for(int i = 0; i < 3 ; i++){
	for(int j = 0; j < 5; j++){
			gotoxy(j+24,i+9);
			cout<<'#';
	}
}
	gotoxy(25,8);
	cout<<'>';
	gotoxy(26,8);
	cout<<'V';
	gotoxy(27,8);
	cout<<'<';
	
	
	
	
	
	//star
	gotoxy(10,5);
		cout<<'X';
	//top of tree
	gotoxy(10,6);
		cout<<'^';
	//second layer
	gotoxy(9,7);
		cout<<'^';
	gotoxy(10,7);
		cout<<'^';
	gotoxy(11,7);
		cout<<'^';
	//third layer
	gotoxy(8,8);
		cout<<'^';
	gotoxy(9,8);
		cout<<'^';
	gotoxy(10,8);
		cout<<'^';
	gotoxy(11,8);
		cout<<'^';
	gotoxy(12,8);
		cout<<'^';
	//fourth layer 
	gotoxy(7,9);
		cout<<'^';
	gotoxy(8,9);
		cout<<'^';
	gotoxy(9,9);
		cout<<'^';
	gotoxy(10,9);
		cout<<'^';
	gotoxy(11,9);
		cout<<'^';
	gotoxy(12,9);
		cout<<'^';
	gotoxy(13,9);
		cout<<'^';
	//trunk 
	gotoxy(9,10);
		cout<<'|';
	gotoxy(11,10);
		cout<<'|';
	gotoxy(10,10);
		cout<<'_';
	//ground
	gotoxy(7,11);
		cout<<'~';
	gotoxy(8,11);
		cout<<'~';
	gotoxy(9,11);
		cout<<'~';
	gotoxy(10,11);
		cout<<'~';
	gotoxy(11,11);
		cout<<'~';
	gotoxy(12,11);
		cout<<'~';
	gotoxy(13,11);
		cout<<'~';
	gotoxy(14,11);
		cout<<'~';
	gotoxy(15,11);
		cout<<'~';
	gotoxy(6,11);
		cout<<'~';
	gotoxy(5,11);
		cout<<'~';

	
//snowflakes 
	for(int i = 0; i <6; i++){
		gotoxy(1,5+i); 
		cout<<'*'<<endl;
		gotoxy(4,6+i);
		cout<<'*'<<endl;
		gotoxy(14,5+i);
		cout<<'*'<<endl;
		gotoxy(16,4+i);
		cout<<'*'<<endl;
		gotoxy(23,5+i);
		cout<<'*'<<endl;
		sleep(1);
		gotoxy(1,5+i);
		cout<<' '<<endl;
		gotoxy(4,6+i);
		cout<<' '<<endl;
		gotoxy(14,5+i);
		cout<<' '<<endl;
		gotoxy(16,4+i);
		cout<<' '<<endl;
		gotoxy(23,5+i);
		cout<<' '<<endl;
	}
}

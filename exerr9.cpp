#include <iostream>
using namespace std;

int main (){
	//9 multiplication table, in reverse (108-9)
	/*
	int num = 108;
	int dec = 9;

	while (num > 0){
		cout << num << endl;
		num-= 9;
	}
	*/
/*
// useless contraption kekw
int input;
cout << "Please input 1 or 2" << endl;
cin >> input;
while (input == 1 || input == 2){
	cout << "Please input 1 or 2" << endl;
	cin >> input;
if (input == 1){
	cout << "You have inputted 1" << endl;
	cin >> input;
}else{
	cout << "You have inputted 2" << endl;
	cin >> input;
}
cout << "Invalid input";
}
*/
char input;
do{
cout << "Would you like to Quit (Y/N)?" <<
endl;
cin >> input;
}while ((input != 'Y') && (input != 'y'));
return 0;
}




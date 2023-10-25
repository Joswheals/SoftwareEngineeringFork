#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void DisplayBannerFull(string message) {
	int L = message.length();	
	displayBanner(L);

	cout << "* ";
	cout << message;
	cout << "* "<< endl;				


	displayBanner(L);
}
int main()
{
	const string message = "Welcome to Computer Science";
	DisplayBannerFull(message);

	//Get the length of the string
			//L is now a LOCAL variable


	//Tell the calling shell all is well
	return 0;
}
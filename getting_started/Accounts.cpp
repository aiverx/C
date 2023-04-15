#include "Accounts.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Accounts account1;
	string newName;

	cout << "Initial account name is: " << account1.getName();

	cout << "\nPlease enter the account name: ";
	getline(cin, newName);
	account1.setName(newName);

	cout << "Now the Name is changed to " << account1.getName() << endl;
	
	return 0;
}
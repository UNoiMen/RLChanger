#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ifstream RLlist_file;
	RLlist_file.open("RLlist.dat");

	string list[100];
	int count = 0;
	while(!RLlist_file.eof()) {
		RLlist_file >> list[count];
		cout << count << ". " << list[count] << endl;
		count++;
	}
	RLlist_file.close();

	cout << "Enter realmlist number you want to set: ";
	int num;
	cin >> num;
	if(num >= count || num < 0) {
		cout << "Error! Wrong number." << endl;
		return 0;
	}
	string temp;
	temp = "./main " + list[num];
	system(temp.c_str());
	return 0;
}

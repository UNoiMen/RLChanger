#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream file;
	file.open("realmlist.wtf");

	string temp;
	cin >> temp;
	file << "set realmlist " << temp;

	file.close();

	return 0;
}

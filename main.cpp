#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** args)
{
	if(argc > 0)
	{
		ofstream file;
		file.open("realmlist.wtf");
		file << "set realmlist " << args[1];
		file.close();
	}
	else
	{
		ofstream file;
		file.open("/Data/ruRU/realmlist.wtf");
		string temp;
		cin >> temp;
		file << "set realmlist " << temp;
		file.close();
	}
	return 0;
}

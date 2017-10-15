#include <iostream>
#include <fstream>

using namespace std;
const char* RLPATH = "Data/ruRU/realmlist.wtf";

int main(int argc, char** args)
{
	bool check = false;
	fstream file;
	file.open("realmlist.wtf");
	if(file.is_open()) {check = true;}
	else
	{
		file.open("Data/ruRU/realmlist.wtf");
		if(file.is_open()) {check = true;}
		else
		{
			file.open("Data/enGB/realmlist.wtf");
			if(file.is_open()) {check = true;}
		}
	}
	if(check == true)
	if(argc > 1)
	{
		file << "set realmlist " << args[1];
	}
	else
	{
		string temp;
		cin >> temp;
		file << "set realmlist " << temp;
	}
	file.close();
	return 0;
}

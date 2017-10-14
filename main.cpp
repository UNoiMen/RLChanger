#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream file;
	file.open("test.log");

	string temp, file_backup;
	file >> file_backup;
	file.close();

	ofstream file2;
	file2.open("test.log");
	cin >> temp;
	cout << file_backup;
	file2 << file_backup << temp;

	file2.close();
	return 0;
}

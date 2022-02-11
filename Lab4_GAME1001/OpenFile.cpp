//Gianmarco Nagliati Bravi
//February 11, 2022
//Lab 4

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string Haiku;

	inputFile.open("Haiku.txt");

	cout << "Here is your haiku:" << endl;
	inputFile >> Haiku;
	cout << Haiku << endl;

	inputFile.close();

	system("Pause");
	return 0;

}

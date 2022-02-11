//Gianmarco Nagliati Bravi
//February 11, 2022
//Lab 4

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream openFile;

	openFile.open("Haiku.txt"); //Open the output file

	cout << "Now writing your Haiku to the file!" << endl;
	
	//Write what goes in the file
	openFile << "Powerful Legend: " << endl; 
	openFile << "It's all I play anymore." << endl;
	openFile << "Gibby Again? Crap." << endl;

	openFile.close(); //Close the output file

	cout << "Your Haiku has been saved!" << endl;

	system("Pause");
	return 0;

}
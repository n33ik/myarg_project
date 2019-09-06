// consolegame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


void verifikacija(string a, string b, int &x)
{
	string uporabnisko = "admin";
	string geslo = "admin";

	if (a == uporabnisko && b == geslo)
	{
		cout << "\nprijava uspesna" << endl;
		cout << "----------------" << endl;
		x = 1;
	}
	else
	{
		cout << "\nnapacno uporabnisko ime ali geslo" << endl;
		cout << "----------------" << endl;
		x = 5;
	}
}

int stage1(int key)
{
	float avo = 6.62607004;
	float check;
	int x;
	if (key <= 1)
	{
		cout << "\nStage 1 unlocked!" << endl;

		cout << "\n01110000 01101100 01100001 01101110"<<endl;
		cout << "01100011 01101011 01110011 00100000"<<endl;
		cout << "01100011 01101111 01101110 01110011"<<endl;
		cout << "01110100 01100001 01101110 01110100" << endl;
		cout<<"decipher :"<<endl;
		cin >> check;

		if (check == avo)
		{
			cout << "\nCorrect!" << endl;
			cout << "----------------" << endl;
			x = 1;
		}
		else
		{
			cout << "\nIncorrect!  Try using txt to binary converter." << endl;
			cout << "----------------" << endl;
			x = 10;
		}
	}
	return x;
}

void exit()
{
	string yes = "y";
	string no = "n";
	string yesno;

	cout << "exit?  (y/n)" << endl;
	cin >> yesno;

	if (yesno == yes)
	{
		cout << "bye!";
	}
}

int main()
{
	string vpisime;
	string vpisgeslo;
	int key;
	


	cout << "Uporabnisko ime: ";
	cin >> vpisime;
	cout << "Geslo: ";
	cin >> vpisgeslo;

	verifikacija(vpisime, vpisgeslo,key);
	stage1(key);
	
	exit();
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

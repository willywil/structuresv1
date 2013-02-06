

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <windows.h>


using namespace std;

// constants
const int NUM_SHAPES = 1; //Global number of shapes variable



struct box	
{
	string name;//Shape type
	string color;//Shape color
	int corner;//Num of corners
	int sides;//Num of sides


}shapes [NUM_SHAPES]; //create structure variable using global variable assignment


int main() 
{
	int n = 1; //shape counter
	int i = 0; //Local Num of shapes variable

	cout << "You have a box full of shapes.\n";
	cout << "How many shapes are in the box?\n";
	cin >> i; //Input Num shapes
	
	i = (i * NUM_SHAPES) + 1; //convert global variable to local based off user input and start variable above 0
	
	//assignment loop
	for (n = 1; n < i; n++)
	{

		cout << "What kind of shape is shape " << n << "?" << endl;
		cin >> shapes[n].name;

		cout << "What color is shape " << n << "?" << endl;
		cin >> shapes[n].color;

		cout << "How many sides does shape " << n << " have?" << endl;
		cin >> shapes[n].sides;

		cout << "How many corners does shape " << n << " have?" << endl;
		cin >> shapes[n].corner;

		cout << "\n\n";
	}

	cout << "The following shapes are in the box: \n\n";

	//Output loop
	for (n = 1; n < i; n++)
	{
		cout << "Shape " << n << " type: " << left << shapes[n].name << endl;
		cout << "Color:        " << left << shapes[n].color << endl;
		cout << "Sides:        " << left << shapes[n].sides << endl;
		cout << "Corners:      " << left << shapes[n].corner << endl;
		cout << "\n\n";
	}


	cout << "\n\n";
	system("pause");
}

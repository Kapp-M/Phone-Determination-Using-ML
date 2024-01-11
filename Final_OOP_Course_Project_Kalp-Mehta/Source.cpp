//Kalp Mehta
// Final OOP Project
// 14 April 2023

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#include "NearestNeighbour.h"

int choice;

int main()
{
	
	NNclassifier arrayTraining[200];

	string filename = "trainingData.txt";

	int countTraining = arrayTraining->loadTraining(filename);


	//Testing Data

	NNclassifier arrayTesting[250];

	string filenameTesting = "testingData.txt";

	int countTesting = arrayTesting->loadOther(filenameTesting);


	//Unknown Data

	NNclassifier arrayUnknown[250];

	string filenameUnknown = "unknownData.txt";

	int countUnknown = arrayUnknown->loadOther(filenameUnknown);

	//Result 
	ofstream outFile("result.txt");

	// Check if the file was successfully created
	if (!outFile.is_open())
	{
		cout << "Error creating output file" << endl;
		return 1;
	}
	cout << "Choose the classifier: \n";
	cout << "1. NN classifier\n";
	cout << "2. KNN classifier (not implemented yet)\n";
	cout << "3. Dummy classifier (not implemented yet)\n";

	cin >> choice;

	if (choice == 1) {
		// NN classifier code
	

	//Tests

	cout << "Before checking what orientation:\n" << endl;

	//printData(arrayUnknown, countUnknown);

	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].printSingle();
	}


	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].findNearestNeighbour(arrayTraining, countTraining);
	}


	cout << "\n\n\n\n\After checking what orientation:\n" << endl;

	//printData(arrayUnknown, countUnknown);

	for (int i = 0; i < countTesting; i++)
	{
		arrayTesting[i].printSingle();
	}
	//result 
	for (int i = 0; i < countUnknown; i++) {
		arrayUnknown[i].findNearestNeighbour(arrayTraining, countTraining);
		outFile << arrayUnknown[i].getx() << " " << arrayUnknown[i].gety() << " " << arrayUnknown[i].getz() << " ," << arrayUnknown[i].getOrientation()<<"," << endl;
	}

	//User Prompt

	double x;
	double y;
	double z;

	NNclassifier temp;

	cout << "Enter the Value for the x coordinate: ";

	cin >> x;

	temp.setx(x);

	cout << "Enter the Value for the y coordinate: ";

	cin >> y;

	temp.sety(y);

	cout << "Enter the Value for the z coordinate: ";

	cin >> z;

	temp.setz(z);

	temp.findNearestNeighbour(arrayTraining, countTraining);

	temp.printSingle();
	// Close the output file
	outFile.close();
	}
	else if (choice == 2 || choice == 3) {
		cout << "Sorry, this classifier is not implemented yet.\n";
	}
	else {
		cout << "Invalid choice.\n";
	}
	return 0;
}


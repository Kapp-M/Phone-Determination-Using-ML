#pragma once
///@file NearestNeighbour.h
/// @brief This is the header file for a NearestNeighbour Class.
/// 
/// This file has the base class called NNclassifier. 
/// @author Kalp Mehta
/// @date 14 April, 2023

#include <iostream>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <sstream>

#define NUM_CHOICES 6

using namespace std;

/// @brief This is the NNclassifier class.
/// 
/// This is the base class which has the Nearest Neighbour algorithm inside.
/// @author Kalp Mehta
/// @date 14 April, 2023

class NNclassifier
{
	double x;
	double y;
	double z;
	int orientation;
	double distance;

public:

	/// @brief This is the NNclassifier default constructor.
	/// 
	/// This constructor will create a NNclassifier object
	/// @param This function does not have any input.
	/// @return This function returns the NNclassifier object that was created
	/// @author Kalp Mehta
	/// date 14 April , 2023


	NNclassifier();

	/// @brief This is the NNclassifier parameterized constructor.
	/// 
	/// This constructor will create a NNclassifier object
	/// @param This function takes input as doubles for the x, y and z coordiantes and ints for the orientation and distance
	/// @return This function returns the NNclassifier object that was created.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	NNclassifier(double x, double y, double z, int orientation, double distance);

	/// @brief This is the getx function.
	/// 
	/// This function get the x value for the object that called it.
	/// @param This function does not have any input.
	/// @return This function returns the x value as a double.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	double getx();

	/// @brief This is the gety function.
	/// 
	/// This function get the y value for the object that called it.
	/// @param This function does not have any input.
	/// @return This function returns the y value as a double.
	/// @author Kalp Mehta
	/// date 14 April , 2023

	double gety();

	/// @brief This is the getz function.
	/// 
	/// This function get the z value for the object that called it.
	/// @param This function does not have any input.
	/// @return This function returns the z value as a double.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	double getz();

	/// @brief This is the getDistance function.
	/// 
	/// This function gets the distance for the object that called it.
	/// @param This function does not have any input.
	/// @return This function returns the distance as a double.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	double getDistance();

	/// @brief This is the getOrientation function.
	/// 
	/// This function gets the orientation for the object that called it.
	/// @param This function does not have any input.
	/// @return This function returns the orientation as an int.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	int getOrientation();

	/// @brief This is the setx function.
	/// 
	/// This function sets the x value for the object that called it.
	/// @param This function takes a double as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	void setx(double x);

	/// @brief This is the sety function.
	/// 
	/// This function sets the y value for the object that called it.
	/// @param This function takes a double as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	void sety(double y);

	/// @brief This is the setz function.
	/// 
	/// This function sets the z value for the object that called it.
	/// @param This function takes a double as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	void setz(double z);

	/// @brief This is the setDistance function.
	/// 
	/// This function sets the distance for the object that called it.
	/// @param This function takes a double as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023


	void setDistance(double distance);

	/// @brief This is the setOrientation function.
	/// 
	/// This function sets the orientation for the object that called it.
	/// @param This function takes a double as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023

	void setOrientation(int orientation);

	/// @brief This is the printSingle function.
	/// 
	/// This function prints the values of its variables for the object that called it.
	/// @param This function does not have any input.
	/// @return This function does not have any output, but it prints to the screen.
	/// @author Kalp Mehta
	/// date 14 April , 2023

	void printSingle();

	/// @brief This is the findNearestNeighbour function.
	/// 
	/// This function finds the orientation for the coordiantes that are passed to it.
	/// @param This function takes in a NNclassifier array(training data) and also the size of this array as input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// date 14 April , 2023

	void findNearestNeighbour(NNclassifier array[], int count);

	/// @brief This is the loadTraining function.
	/// 
	/// This function loads in data from the file that it is passed and saves it into an NNclassifier object array(training data array).
	/// @param This function takes the filename in the form of a string as input.
	/// @return This function outputs the number of objects that were saved as the output(number of lines in the .txt file).
	/// @author Kalp Mehta
	/// date 14 April , 2023

	int loadTraining(string filename);

	/// @brief This is the loadOther function.
	/// 
	/// This function loads in data from the file that it is passed and saves it into an NNclassifier object array(either testing or unknown data array).
	/// @param This function takes the filename in the form of a string as input.
	/// @return This function outputs the number of objects that were saved as the output(number of lines in the .txt file).
	/// @author Kalp Mehta
	/// date 14 April , 2023

	int loadOther(string filenameTesting);



};


/// @brief This is the comparison function.
/// 
/// This function compares the distance for the 2 objects that it is passed.
/// @param This function takes 2 Nnclassifier objects as input.
/// @return This function outputs either true if a < b or false if a > b.
/// @author Kalp Mehta
/// date 14 April , 2023


bool comparison(NNclassifier a, NNclassifier b);

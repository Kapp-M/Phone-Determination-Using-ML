#pragma once

#include <iostream>

///@file AnotherClassifier.h
/// @brief This is the header file for a AnotherClassifier Class.
/// 
/// This file has the derived class called AnotherClassifier. 
/// @author Kalp Mehta
/// @date 14 April, 2023

#include "NearestNeighbour.h"

using namespace std;

/// @brief This is the AnotherClassifier class.
/// 
/// This is the derived class which has inherited from the NNclassifier.
/// @author Kalp Mehta
/// @date 14 April, 2023

class AnotherClassifier :public NNclassifier
{


public:

	/// @brief This is the KNNClassifier function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function does not have any output.
	/// @author Kalp Mehta
	/// @date 14 April, 2023

	void KNNClassifier();

	/// @brief This is the loadTraining function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function outputs an int.
	/// @author Kalp Mehta
	/// @date 14 April, 2023

	int loadTraining();

	/// @brief This is the loadOther function.
	/// 
	/// This function prints a line to the screen.
	/// @param This function does not have any input.
	/// @return This function outputs an int.
	/// @author Kalp Mehta
	/// @date 14 April, 2023

	int loadOther();
};
/**
*	@author Thomas Smithey
*	@date 04/24/2019
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include <vector>
#include "Test.h"

using namespace std;

void showResults(LinkedListOfInts showResult)
{
	vector<int> listToVector = showResult.toVector();
	unsigned int i;
	for (i = 0; i < listToVector.size(); i++)
	{
		cout << listToVector[i] << endl << endl;
	}
}

int main(int argc, char** argv)
{
	Test myTester;
	myTester.runTests();
	return (0);
}


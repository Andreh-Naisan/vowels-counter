// Week 04 - Programming Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Andreh Naisan

#include "windows.h"
#include <iostream>
#include<iomanip>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << std::endl;
	}
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}
    else
    {
        //program introduction 
        cout << std::setw(75) << std::setfill('*') << "*" << endl;
        cout << std::setw(50) << std::setfill('*') << " Welcome to my Letter Count Program " << std::setw(24) << std::setfill('*') << "*" << endl;
        cout << std::setw(75) << std::setfill('*') << "*" << endl;
        cout << "\n" << endl;
        //declaring variables
        int a=0, e=0, i=0, o=0, u=0;//adding int s c w for github

        string line;
        //while loop to count for the vowels
        while (true)
        {
            while (getline(inFile, line))
            {
                for (int i = 0; i < line.length(); i++)
                {
                    if (line.at(i) == 'a') { a++; }
                    else if (line.at(i) == 'e') { e++; }
                    else if (line.at(i) == 'i') { i++; }
                    else if (line.at(i) == 'o') { o++; }
                    else if (line.at(i) == 'u') { u++; }
                    //else if (line.at(i) == 's') { s++; } //adding three letters for gihub
                    //else if (line.at(i) == 'c') { c++; }
                    //else if (line.at(i) == 'w') { w++; }
                }
            }
            //adding all of the vowels together to view the number of vowels combined
            int count;
            count = a + e + i + o + u;
            // displaying the results from the document
            cout << "Analyzing file" << argv[1] << endl;
            cout << "The number of A's:......................" << a << endl;
            cout << "The number of E's:......................" << e << endl;
            cout << "The number of I's:......................" << i << endl;
            cout << "The number of O's:......................" << o << endl;
            cout << "The number of U's:......................" << u << endl;
            //cout << "The number of S's:......................" << s << endl; //displaying the results for github
            //cout << "The number of C's:......................" << c << endl;
            //cout << "The number of W's:......................" << w << endl;
            cout << "The vowel count is:......................" << count << endl;

        }
    }
    //to close and exit
    inFile.close();
    system("pause");
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

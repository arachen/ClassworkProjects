// A****g, Stephanie
// M***** Spring 2014 Program 4b
// Description: Counts frequency of ASCII characters in a file, then outputs.
// Compiler: G++
// Status: Compiles
// Help: None

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(void)
{
    ifstream inputFile;
    string infile;
    char ch;
    int i, cnt = 0;
    int asciiArray[128] = {0};

    // Gets input filename from user and checks to make sure it can be opened.
    cout << "Please enter your input filename: ";
    cin >> infile;

    inputFile.open(infile.c_str());

    if (inputFile.fail())
    {
        cout << "Input file could not be opened. Try again." << endl;
        exit(0);
    }

    // Sets up the ASCII/Frequency table
    cout << left << setw(10) << "\nASCII" << right << setw(10) << "Count" << endl;

    // Gets the first character from the file
    inputFile.get(ch);

    // Adds a counter for total characters and individual characters found,
    // then gets the next character
    while(!inputFile.eof())
    {
        cnt++;
        asciiArray[(int)ch]++;
        inputFile.get(ch);
    }

    // Outputs the ASCII code if the character existed in the file, then
    // the number of times it appeared beside it.
    for (i = 0; i < 128; i++)
    {
        if (asciiArray[i] > 0)
        {
            cout << left << setw(10) << i << right << setw(7) << asciiArray[i] << endl;
        }
    }

    // Outputs the total number of characters in the file
    cout << "\nTotal number of chars in this file is " << cnt << "\n" << endl;

    // Closes the input file
    inputFile.close();

    return 0;
}

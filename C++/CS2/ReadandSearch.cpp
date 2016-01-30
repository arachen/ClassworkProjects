// A****g, Stephanie
// M***** Spring 2014 Program 5
// Description: Reads file contents into array as strings, outputs contents
//              in forward order, then searches at user decision
// Compiler: G++
// Status: Compiles
// Help: None

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

void printNames(string [], int);
void linSearch(string, int, int);

int main(void)
{
    ifstream inputFile;
    string filename;
    int headernum = 0, i;
    char ans;
    string key;
    bool found;
    const int MAX_NAMES = 10;
    //const int MAX_NAME_LENGTH = 50;

    // Gets filename from user, then ensures file can be opened
    cout << "Please enter the name of your input file: ";
    cin >> filename;

    inputFile.open(filename.c_str());

    if (inputFile.fail())
    {
        cout << "Input file could not be opened. Try again." << endl;
        return 1;
    }

    // Ensures file's contents can be read, then gets header number. If the header
    // number is larger than MAX_NAMES, gives an error
    if (inputFile.eof())
    {
        cout << "Error reading input file contents." << endl;
        return 1;
    }

    inputFile >> headernum;

    if (headernum > MAX_NAMES)
    {
        cout << "Number of names cannot exceed maximum of " << MAX_NAMES << "." << endl;
        return 1;
    }

    // Creates a new string array with the size headernum. NOTE: I discovered this method of creating arrays after
    // reading up about string and char arrays. Although it isn't a 2D array, it works very well and seems to be
    // more efficient! Truthfully, I couldn't figure out how to store each individual char as strings into the 2D array,
    // so I found this works as an alternative.. Hopefully I can speak to a tutor or the professor about this before the due
    // date, but if not (and this is still here), I understand if this part does not satisfy the program requirement of using
    // a 2D array to store the input file's contents as strings.
    string *names = new string[headernum];

    // Stores the contents of the input file as strings in the array
    for (i = 0; i < headernum; i++)
    {
        inputFile >> names[i];
    }

    // Calls function printNames to print the array in forward order
    printNames(names, headernum);

    // Continually asks if user wishes to search for a name. If yes, asks for the key
    // and then uses linear search to search the array, outputting the position of the key
    // If no, closes the program
    while (1)
    {
        cout << "Do you wish to search for a name? ";
        cin >> ans;

        if (ans == 'y' || ans == 'Y')
        {
            cout << "Enter name: ";
            cin >> key;

            for (i = 0; i < headernum; i++)
            {
                if (names[i] == key)
                {
                    cout << key << " found in position " << (i + 1) << "\n" << endl;
                    found = true;
                }
            }

            if (found != true)
            {
                cout << key << " not found." << "\n" << endl;
            }

        }

        else
        {
            return 1;
        }
    }

    return 0;
}

// Function to print the contents of the array names[] in forward order.
void printNames (string fnames[], int fheadernum)
{
    for (int i = 0; i < fheadernum; i++)
    {
        cout << fnames[i] << endl;
    }

    cout << "\n";
}

// Name: Stephanie Asling
// Due Date: 9/2/2015
// Program 1
// Driver

#include <iostream>
#include <string>
#include <fstream>
#include "myUtils.cpp"

using namespace std;

int main()
{
    string filename;
    char choice;
    int count;

    // declare an array of strings and an array of ints
    // for dynamic allocation
    string* strList;
    int* numList;

    // while user has not selected to quit, loop menu options after each
    // user decision
    do
    {
        cout << "Please enter your choice:\n" <<
                    "A to get data from a new file\n" <<
                    "B to search for a name in this file\n" <<
                    "C to search for a value in this file\n" <<
                    "D to output data alphabetically by name\n" <<
                    "E to output data from largest to smallest by value\n" <<
                    "Q to quit" << endl;
        cin >> choice;

        switch(choice)
        {
            case 'A':
            {
                // get filename, get data from the file chosen, output data count
                // and actual data
                cout << "You chose " << choice << "\n" << endl;

                filename = getFilename();
                cout << "You entered " << filename << "." << "\n" << endl;

                count = getDataFromFile(strList, numList, filename);

                cout << "Data count: " << count << "\n" << endl;

                for (int i = 0; i < count; i++)
                {
                    cout << strList[i] << " " << numList[i] << endl;
                }

                cout << "\n" << endl;

                break;
            }
            case 'B':
            {
                // search for user-given string from string array, give
                // error message if string does not exist
                cout << "You chose " << choice << "\n" << endl;

                string searchWord;
                int found = 0;

                cout << "Please enter the exact name you wish to " <<
                        "search for (case sensitive): ";
                cin >> searchWord;

                found = strSearch(strList, count, searchWord);

                if(found != -1)
                {
                    cout << searchWord << " found at position " << found << "." << "\n" << endl;
                }
                else if((found == -1))
                {
                    cout << searchWord << " not found. Please try again." << "\n" << endl;
                }

                break;
            }
            case 'C':
            {
                // search for user-given int from int array, give
                // error message if int does not exist
                cout << "You chose " << choice << "\n" << endl;

                int searchNum;
                int found = 0;

                cout << "Please enter the number you wish to search for: ";
                cin >> searchNum;

                found = numSearch(numList, count, searchNum);

                if(found != -1)
                {
                    cout << searchNum << " found at position " << found << "." << "\n" << endl;
                }
                else if((found == -1))
                {
                    cout << searchNum << " not found. Please try again." << "\n" << endl;
                }

                break;
            }
            case 'D':
            {
                // sort string array alphabetically (A - Z) and then print out
                // both arrays
                cout << "You chose " << choice << "\n" << endl;

                cout << "Here is the list, sorted alphabetically: " << endl;
                sortAlpha(strList, numList, count);
                printList(strList, numList, count);

                break;
            }
            case 'E':
            {
                // sort int array numerically in ascending order and then print
                // out both arrays
                cout << "You chose " << choice << "\n" << endl;

                cout << "Here is the list, sorted numerically from largest to smallest: " << endl;
                sortNum(numList, strList, count);
                printList(strList, numList, count);

                break;
            }
            case 'Q':
                // quit program
                cout << "Thank you for using the program!" << "\n" << endl;

                return 0;
            default:
                // display error message if user enters invalid choice
                cout << "Please enter a valid selection. You entered: " << choice << "\n" << endl;
         }
    }
    while (choice != 'Q');

    return 0;
}

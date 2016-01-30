// Name: Stephanie Asling
// Due Date: 9/2/2015
// Program 1
// Header

#include <string>
#include <iostream>

// pre: filename exists and is correctly inputted by user
std::string getFilename();
// post: system well get and store user's filename

// pre: data exists within the user's filename from getFilename()
int getDataFromFile(int* &, std::string);
// post: data in the form of strings and numbers are extracted from the file
//       and stored in two parallel arrays (one of strings, one of ints)

// pre: search term must exist within string array
int strSearch(std::string*, int, std::string);
// post: searches for the user's inputted string; if the string is found, the
//       position is returned and output to screen. if not, an error message
//       is displayed

// pre: search term must exist within int array
int numSearch(int*, int, int);
// post: searches for the user's inputted int; if the int is found, the position
//       is returned and output to the screen. if not, an error message is displayed

// pre: array of strings is unsorted
void sortAlpha(std::string*, int*, int);
// post: array of strings is sorted alphabetically (A - Z)

// pre: array of ints is unsorted
void sortNum(int*, std::string*, int);
// post: array of ints is sorted numerically in ascending order

// pre: arrays have not been output to the screen
void printList(std::string*, int*, int);
// post: outputs the parallel arrays to the screen in the order of string + whitespace + int,
//       one per line for better readability

// pre: user has given filename via getFilename()
bool getStream(std::string, std::ifstream&);
// post: used by getDataFromFile(); error-checking to determine if file exists/can be opened.
//       if it cannot, an error message is displayed





// !! DEBUGGING AND TEST CODE BELOW !! //

/* STRUCTS - dunno how to make it work and gave up quickly
struct FileData
{
    std::string name;
    int value;
};
*/

//int getCount(std::string);

// Name: Stephanie Asling
// Due Date: 9/2/2015
// Program 1
// Utilities

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "myUtils.h"

using namespace std;

// function to get filename from user
string getFilename()
{
    string localFile;

    cout << "Please enter the name of the file: ";
    cin >> localFile;

    return localFile;
}

// function to determine if given file exists/can be opened
bool getStream(string theFile, ifstream& inputStream)
{
    inputStream.open(theFile.c_str());
    if (inputStream)
    {
        return true;
    }

    cout << "Could not open file. Please try again." << endl;
    return false;
}

// function to count separate data instances in a file (string + int pair) and then extract
// the data into two parallel arrays: an array of strings and an array of ints
int getDataFromFile(string* & f_strList, int* & f_numList, string theFile)
{
    int cnt = 0;
    int num = 0;
    char name[100];

    ifstream data;
    if(getStream(theFile, data))
    {
        while(data >> name >> num)
        {
            cnt++;
        }
        data.clear();
        data.seekg(0, ios::beg);

        f_strList = new string[cnt];
        f_numList = new int[cnt];

        for(int i = 0; i < cnt; i++)
        {
           data >> f_strList[i] >> f_numList[i];
        }
    }

    return cnt;
}

// function to search for a user-given string within the string array
int strSearch(string* f_strList, int f_count, string f_searchWord)
{
    int position = -1;

    for(int i = 0; i < f_count; i++)
    {
        if(f_strList[i] == f_searchWord)
        {
            position = i;
        }
    }

    return position;
}

// function to search for a user-given int within the int array
int numSearch(int* f_numList, int f_count, int f_searchNum)
{
    int position = -1;
    int i;

    for(i = 0; i < f_count; i++)
    {
        if(f_numList[i] == f_searchNum)
        {
            position = i;
        }
    }

    return position;
}

// function to sort the string array alphabetically (A - Z)
void sortAlpha(string* f_strList, int* f_numList, int f_count)
{
    int i;
    int j;
    string strTemp;
    int numTemp;

    for(i = 0; i < f_count; i++)
    {
        for(j = i + 1; j < f_count; j++)
        {
            if(strcmp(f_strList[i].c_str(), f_strList[j].c_str()) > 0)
            {
                strTemp = f_strList[i];
                f_strList[i] = f_strList[j];
                f_strList[j] = strTemp;

                // mirror any actions because they are parallel arrays
                numTemp = f_numList[i];
                f_numList[i] = f_numList[j];
                f_numList[j] = numTemp;
            }
        }
    }
}

// function to sort the int array numerically in ascending order
void sortNum(int* f_numList, string* f_strList, int f_count)
{
    int i;
    int j;
    int numTemp;
    string strTemp;

    for(i = 1; i <= f_count; i++)
    {
        for(j = 0; j < (f_count - 1); j++)
        {
            if(f_numList[j + 1] < f_numList[j])
            {
                numTemp = f_numList[j];
                f_numList[j] = f_numList[j + 1];
                f_numList[j + 1] = numTemp;

                // mirror any actions because they are parallel arrays
                strTemp = f_strList[j];
                f_strList[j] = f_strList[j + 1];
                f_strList[j + 1] = strTemp;
            }
        }
    }
}

// function to print the parallel arrays in a user-friendly format
void printList(string* f_strList, int* f_numList, int f_count)
{
    for(int i = 0; i < f_count; i++)
    {
        cout << f_strList[i] << " " << f_numList[i] << endl;
    }

    cout << endl;
}





// !! DEBUGGING AND TEST CODE BELOW !! //

/*
int getCount(string theFile)
{
    int cnt = 0;
    int num = 0;
    char name[100];

    ifstream data;
    if(getStream(theFile, data))
    {
        while(data >> name >> num)
        {
            cnt++;
        }
        data.clear();
        data.seekg(0, ios::beg);
    }

    return cnt;
}
*/

// STRUCTS - dunno how to make it work and gave up quickly
/*
int getDataFromFile(int* & f_listOfData, string theFile)
{
    int cnt = 0;
    int num = 0;
    int name[100];

    ifstream data;
    if(getStream(theFile, data))
    {
        while (data >> name >> num)
        {
            cnt++;
        }
        data.clear();
        data.seekg(0, ios::beg);


        FileData *f_listOfData;
        f_listOfData = new FileData[cnt];

        for (int i = 0; i < cnt; i++)
        {
            data >> f_listOfData[i].name >> f_listOfData[i].value;
        }

    }

    return cnt;
}
*/


/*
 * Stream output
 */
#include <iostream>
#include <iomanip>

using namespace std;

void PrintDate(int year, int month, int day)
{
    cout << setfill('0') << setw(4) << year << '/' << setw(2) << month << '/'
         << setw(2) << day << endl;
}



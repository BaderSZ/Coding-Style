/***********************************************************************
*Custom Coding Style*

This xml is the coding style export I use for Eclipse CDT. To import,
go to Preferences -> C/C++ -> Coding Style -> Formatter -> Import.

Important Notes:
- Tabs are 4 spaces.
- 'public' 'protected' & 'private' are in the class body.
- Statements within blocks.
- All braces are on seperate lines.

Examples are below.
************************************************************************/

/*
 * A sample source file for the code formatter preview
 */
#include <math.h>

class Point
{
     public:
        Point(double x, double y)
                        : x(x),
                          y(y)
        {
        }
        double distance(const Point& other) const;

        double x;
        double y;
};

double Point::distance(const Point& other) const
{
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}


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


/*
 * If...else
 */
class Example
{
        void bar()
        {
            do
            {
            }
            while (true);
            try
            {
            }
            catch (...)
            {
            }
        }
        void foo2()
        {
            if (true)
            {
                return;
            }
            if (true)
            {
                return;
            }
            else if (false)
            {
                return;
            }
            else
            {
                return;
            }
        }
        void foo(int state)
        {
            if (true)
                return;
            if (true)
                return;
            else if (false)
                return;
            else
                return;
        }
};

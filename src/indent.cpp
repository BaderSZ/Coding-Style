/*
 * Indentation
 */
#include <math.h>

/* Remember: All tabs are 4 spaces. */

/* The public/protected/private statements are not members
 * of the class body. Only one space is to be used for them.
 */
class Point
{
 public:
    Point(double x,  double y) :     // Declarations are relative to these statements
                    x(x), 
                    y(y)
    {
    }

    double distance(const Point& other) const;
    int compareX(const Point& other) const;
    double x;
    double y;
};
    
double Point::distance(const Point& other) const
{

/* Statements are within the function body. */
    double dx = x - other.x;
    double dy = y - other.y;
    
    return sqrt(dx * dx + dy * dy);
}

int Point::compareX(const Point& other) const
{
/* These statements are arranges in block form */
    if (x < other.x)
    {
        return -1;
    }
    else if (x > other.x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

namespace FOO
{

/* 'Switch' is to be treated as a statement */
    int foo(int bar) const
    {
        switch (bar)
        {
            case 0:
                ++bar;
                break;
            case 1:
                --bar;
            default:
            {
                bar += bar;
                break;
            }
        }
    }
}  //  end namespace FOO

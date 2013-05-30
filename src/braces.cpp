/*
 *                        *Braces*
 * To summarize the code below, all classes, functions,
 * namespaces, switches case, statements and other
 * major case statements have their braces in a new line.
 * Lists/vectors have their braces on the next line, but
 * their elements can be on the same line as the braces:
 * this depends on the length and/or preference.
 */
#include <math.h>

/* Braces are usually on the same line as their elements, but if
 * the list covers multiple lines, then the closing brace is on a
 * new line.
 */
int digits[] =
{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

/* In a class declaration, the braces are on a new line- always. */
class Point
{
 public:
    Point(double x, double y) :
                    x(x),
                    y(y)
    {
    }
    double distance(const Point& other) const;
    int compareX(const Point& other) const;
    double x;
    double y;
};

/* Functions have their braces on a newline. */
double Point::distance(const Point& other) const
{
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

int Point::compareX(const Point& other) const
{
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

/* In a namespace declaration, the braces are on a new line too. */
namespace FOO
{
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
}  // end namespace FOO 

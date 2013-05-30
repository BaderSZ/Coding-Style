/* 
 * White space 
 *
 * This is a long file, so please be patient.
 *
 * There is a single space after every comma,
 * and before every parentheses.
 */

/* */
class MyClass : Base1, Base2
{
};


int a = 0, b = 1, c = 2, d = 3;


void foo() throw (E0, E1)
{
}
void bar(int x, int y) throw ()
{
}


/* Controls Statements */
int a = 4;
foo();
bar(x, y);



if (true)
{
    return 1;
}
else
{
    return 2;
}



if (condition)
{
    return foo;
}
else
{
    return bar;
}



for (int i = 0, j = argc; i < argc; i++, j--)
{
}



switch (number)
{
    case RED:
        return GREEN;
    case GREEN:
        return BLUE;
    case BLUE:
        return RED;
    default:
        return BLACK;
}



while (condition)
{
}
do
{
}
while (condition);



try
{
    number = Math::parseInt(value);
}
catch (Math::Exception e)
{
}

/* Expressions*/
foo();
bar(x, y);

int a = -4 + -9;
b = a++ / --number;
c += 4;
bool value = true && false;

int array[] =
{ 1, 2, 3 };

result = (a * (b + c + d) * (e + f));

char * s = ((char *) object);


bool value = condition ? true : false;

a = 0, b = 1, c = 2, d = 3;

/* Arrays */
int array[] =
{ 1, 2, 3 };
array[2] = 0;
int * parray = new int[3];
delete[] parray;

/* Templates */
template<typename T1, typename T2> class map
{
};
map<int, int> m;



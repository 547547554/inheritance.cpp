#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << " I am student  \n";
    }
};

class Male
{
public:
    void maleprint()
    {
        cout << " I am male \n";
    }
};

class Female
{
public:
    void femaleprint()
    {
        cout << " I am Female \n";
    }
};

class Boy : public Student, public Male
{
public:
    void boyprint()
    {
        cout << " I am Boy \n";
    }
};

class Girl : public Student, public Female

{
public:
    void girl_print()
    {
        cout << " I am Girl \n";
    }
};

int main()
{
    Boy B;
    B.print();
    B.boyprint();

    // Girl G;
    // G.print();
    // G.girl_print();
    return 0;
}
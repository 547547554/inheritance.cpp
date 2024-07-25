#include <iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age, weight;
};

class student : protected Human
{
private:
    int roll_no, fees;

public:
    void fun(string a, int b, int w)
    {
        name = a;
        age = b;
        weight = w;
    }

    void display()
    {
        cout << name << " " << age << " " << weight << " ";
    }
};

int main()
{
    student A;
    A.fun("rohit", 21, 55);
    A.display();
}
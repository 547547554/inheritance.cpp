#include <iostream>
using namespace std;

class Human
{
    string religin, color;

protected:
    string name;
    int age, weight;
};

class student : protected Human
{
private:
    int roll_no, fees;

public:
    student(string name, int age, int weight, int roll_no, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }
    void display()
    {
        cout << "name is  " << name << endl
             << "age is  " << age << endl
             << "weight is " << weight << endl
             << "roll_no is " << roll_no << endl
             << "fees is  " << fees;
    }
};

int main()
{
    student A("rohit", 21, 55, 1, 10000);
    A.display();
}



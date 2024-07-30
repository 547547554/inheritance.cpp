#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human()
    {
        // default constructor
    }

    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << " \n";
    }

    void work()
    {
        cout << "I am working \n";
    }
};

class student : public Human
{
    int roll_no, fees;

public:
    student(string name, int age, int roll_no, int fees) : Human(name, age)
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_no << " " << fees << " " << endl;
    }
};

class teacher : public Human
{
    int salary;

public:
    teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << " " << endl;
    }
};

int main()
{
    student A("rakesh", 21, 1, 35000);
    A.display();
    teacher A2(9999, "jagesh", 22);
    A2.display();
    A.work();
}
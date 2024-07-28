#include <iostream>
using namespace std;

class person
{
protected:
    string name;

public:
    void introduction()
    {
        cout << "Hello my name is :" << name << endl;
    }
};

class employee : public person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "my monthly salary is :" << salary << endl;
    }
};

class manager : public employee
{
public:
    string departement;

    manager(string name, int salary, string departement)
    {
        this->name = name;
        this->salary = salary;
        this->departement = departement;
    }

    void work()
    {
        cout << "I am leading at department :" << departement << endl;
    }
};

int main()
{
    manager A("rohit", 50000, "Finance");
    A.introduction();
    A.monthly_salary();
    A.work();
}

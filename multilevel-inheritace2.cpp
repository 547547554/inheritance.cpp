#include <iostream>
using namespace std;

class person
{
protected:
    string name;

public:
    void introduction()
    {
        cout << "my name is : " << name << endl;
    }
};

class teacher : public person
{
protected:
    string subject;

public:
    void teach()
    {
        cout << "I am Teaching this subject : " << subject << endl;
    }
};

class principle : public teacher
{
public:
    string school;

public:
    principle (string name, string subject, string school)
    {
        this->name=name;
        this->subject=subject;
        this->school=school;
    }

    public:
    void work()
    {
        cout<<"I am principle of this school : "<<school<<endl;
    }
};

int main()
{
    principle A1("Rakesh","C++","Rungta public school");
    A1.introduction();
    A1.teach();
    A1.work();
}
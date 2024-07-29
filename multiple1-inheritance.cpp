#include <iostream>
using namespace std;

class engineer
{
public:
    string specilization;

    void work()
    {
        cout << "My specilization is :" << specilization << endl;
    }
};

class youtube
{
public:
    int subscribers;

    void contentcreator()
    {
        cout << "My total subscribers is :" << subscribers << endl;
    }
};

class Teacher : public engineer, public youtube
{
    public:
    string name;

    Teacher(string name , string specilization , int subscribers)
    {
        this->specilization = specilization;
        this->subscribers = subscribers;
        this->name = name;
    }

    void showcase()
    {
        cout<<"my name is :"<<name<<endl;

           work();
           contentcreator();
    }
    
};

int main()
{
    Teacher A1("Rakesh","AIML",2000);
    A1.showcase();
}
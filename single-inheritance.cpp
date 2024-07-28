#include<iostream>
using namespace std;
//curect the error
class Human 
{
    protected :
    string name;
    int age;

    public :
    void work()
    {
        cout<<"i am working here \n";
    }
};

class student : public Human
{
    int roll_no, fees;

    public:
    student(string name,int age,int roll_no, int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }
};

int main()
{
    student A("rohit",21,1,23090);
    A.work();
}

// #include<iostream>
// using namespace std;

// class Human 
// {
// protected:
//     string name;
//     int age;

// public:
//     void work()
//     {
//         cout << "I am working here \n";
//     }
// };

// class student : public Human
// {
//     int roll_no, fees;

// public:
//     student(string name, int age, int roll_no, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->roll_no = roll_no;
//         this->fees = fees;
//     }
// };

// int main()
// {
//     student A("rohit", 21, 1, 23090);
//     A.work();
// }

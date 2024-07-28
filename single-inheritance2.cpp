// Distructor code
#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:

    ~Human(){
        cout<<"hello Human\n";
    }

};

class student : public Human
{
    public:
  ~student()
  {
    cout<<"hello student \n";
  }
};

int main()
{
    student A1;
}
//--------------------------------------------------------------------------------------------------------
//constructor
// #include <iostream>
// using namespace std;

// class Human
// {
// public:
//     Human()
//     {
//         cout << "Hello Human\n";
//     }
// };

// class student : public Human
// {
// public:
//     student()
//     {
//         cout << "hello student \n";
//     }
// };

// int main ()
// {
//     student A1;
// }
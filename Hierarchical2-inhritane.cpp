#include <iostream>
using namespace std;

class Animal
{
protected:
    string Animal_name, mammals;
  
    public:
    Animal()
    {
        // defalt constructor
    }

    Animal(string Animal_name, string mammals)
    {
        this->Animal_name = Animal_name;
        this->mammals = mammals;
    }

    void display()
    {
        cout << Animal_name << " " << mammals << " " << endl;
    }

    void works()
    {
        cout << "all mammales are non-vegeterian Animal ";
    }
};

class Cat : public Animal
{
    string pet_animal;

public:
    Cat(string Animal_name, string mammals, string pet_animal)
    {
        this->Animal_name = Animal_name;
        this->mammals = mammals;
        this->pet_animal = pet_animal;
    }

    void display()
    {
        cout << Animal_name << " " << mammals << " " << pet_animal << " " << endl;
    }
};

class Dog : public Animal
{
    string intelligent;

public:
    Dog(string Animal_name, string mammals, string intelligent )
    {
        this->Animal_name = Animal_name;
        this->mammals = mammals;9op
        this->intelligent = intelligent;
    }
    void display()
    {
        cout << Animal_name << " " << mammals << " " << intelligent << " " << endl;
    }
};
/// @brief 
/// @return 
int main()
{
    Cat c1("Cat", "Mammal", "Pet");
    Dog d1("Dog", "Mammal", "Intelligent");

    c1.display();
    d1.display();
}

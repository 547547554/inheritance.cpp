#include<iostream>
using namespace std;

class mammal
{
    public:
    mammal()
    {
        cout<<"Mammal can give direct birth "<<endl;

    }
};

class wingedanimal
{
  public:
  wingedanimal()
  {
    cout<<"winged animal can flap "<<endl;

  }
};

class Bat : public mammal , public wingedanimal
{

};

int main ()
{
    Bat A1;
    
}
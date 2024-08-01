//Multipath inheritance

#include <iostream>
using namespace  std;

// Human -> Engineer -> Youtuber -> Teacher

class Human 
{
  public:
  string name;

  void display ()
  {
    cout<< " my name is : "<<name<<endl;
  }
};

class Engineer : public virtual Human
{
  public: 
  string specilization;

  void work()
  {
    cout<<" I have specilization in : "<<specilization<<endl;
  }
};

class  Youtuber :  public  virtual Human
{
  public:
  int subscribers;

  void contentcreator()
  {
    cout<<" I have subscriber base on :  "<<subscribers<<endl;
  }

};

class  CodeTeacher : public virtual Youtuber ,public  virtual Engineer

{
  public:
  int salary;

CodeTeacher( string name , string specilization,int subscribers, int salary)
{
    this->name= name;
    this->specilization =specilization;
    this->subscribers = subscribers;
    this->salary=salary;
}
 void income()
 {
    cout<<" My salary is : "<<salary<<endl;
 }
};

int main()
{
    CodeTeacher A1("Rakesh","AIML",2000,80);
    A1.display();
    A1.contentcreator();
    A1.work();
    A1.income();
    
}


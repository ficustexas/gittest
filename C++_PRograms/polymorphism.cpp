#include<iostream>
#include<stdio.h>
using  namespace std;
class Person
{
    public:
  virtual void introduse()
    {
	cout<< "Hi from person"<<endl;
    }
};
class Student :public Person
{
    public:
	void introduse()
	{
	    cout<<"Hi from Student"<<endl;
	}
};
class Former : public Person
{
    public:
	void introduse()
	{
	    cout<<"Hi From Former"<<endl;
	}
};
void WhoseThis(Person &p)
{
    p.introduse();
}
 
int main()
{
    Former San;
    Student Bhanu;
    Person Roopak;

     WhoseThis(Roopak);
     WhoseThis(Bhanu);
     WhoseThis(San);

    return 0;
}

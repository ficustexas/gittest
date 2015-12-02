#include<iostream>
using namespace std;
template<class type1,class type2> class Myclass
{
    type1 p1;
    type2 p2;
    int counter;
 public:
    Myclass(type1 t1,type2 t2)
    {
	p1 = t1;
	p2 = t2;
	counter = 100;
    }
    void whatyougot()
    {
    cout<< "i got p1  : " << p1 << " and p2 is "<< p2 << "  and counter  value is:"<< counter << endl;
    } 
};

int main()
{
    Myclass<int,string> ob1(20,"santhosh");

    Myclass<int, float> ob2(20,25.25);
   
    ob1.whatyougot();
    ob2.whatyougot();
    return 0;
}

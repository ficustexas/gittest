#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
    int a= 10,b=0;
    int c;
    try
    {
	if(b==0)
	throw runtime_error("Divide by Zero error");
	c=a/b;
	cout<< c <<endl;
	
    }catch(runtime_error &e)
	{
	cout<<"Exception occur"<<endl;
	cout<<e.what()<<endl;
	}
    
    return 0;
}







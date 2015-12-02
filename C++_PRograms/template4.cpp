#include<iostream>
using namespace std;
template<typename type> void display(type x,int y)
{
    for( int counter =1; counter<=y; counter++)
	cout<< x<< endl;
}

int main ()
{
    display(20.3,3);
}

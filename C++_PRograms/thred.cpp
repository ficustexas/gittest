#include<iostream>
#include<thread>
using namespace std;
void function()
{
    cout<< "Hello from function1"<<endl;
}
int main()
{
    thread t1(function);
    t1.join();
    return 0;
}

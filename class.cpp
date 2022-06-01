#include <iostream>
#include "employ.cpp"
using namespace std;


int main()
{
    
    Employ Olha;
    Olha.enter();
    Olha.print();
    
    
    cout<<Olha.roundingSalary();
    cout<<"\n";
    
    
    return 0;
}
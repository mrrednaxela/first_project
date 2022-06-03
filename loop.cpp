#include <iostream>
using namespace std;


int main(){

    // int a=100;

    // for(;a<201;a+=2){
    //     cout<<"numb a: "<<a<<endl;
    // }
    // while(a<201){
    //      cout<<"numb a: "<<a<<endl;
    //      a+=2;
    // }
    // do{
    //     cout<<"numb a: "<<a<<endl;
    //     a+=2;
    // }while(a<201);
    int numb;
    cout<<"Enter the numb: \t";
    cin>>numb;
    switch (numb)
    {
    case 0:
        cout<<"0";
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout<<"5";
        break;
    
    default:
        cout<<"def";
        break;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    int health=100;
    int randomnumb;

    cout<<"Welcome to the BAR!"<<endl;
    for(; health>=0; ){
        cout<<"These are your health point: "<<health<<endl;
        cout<<"Enter the number 1-5: \t";
        cin>>randomnumb;
        if (randomnumb==2||randomnumb==4){
            health-=5;
            cout<<"Ouch, you healthpoint -5"<<endl;
                if(health==0){
                cout<<"Oops... You died!"<<endl;
                break;
                }
            continue;
        }

        if (randomnumb==1||randomnumb==3||randomnumb==5){
          cout<<"Phew... Good number!"<<endl;
            continue;  
        }
    }

return 0;
}
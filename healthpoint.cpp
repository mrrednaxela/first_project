#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int health=100;
    int randomnumb;

    cout<<"Welcome to the BAR!"<<endl;
    for(; health>=0; ){
        int randnum=rand()%4+1;
        cout<<"These are your health point: "<<health<<endl;
        cout<<"Enter the number 1-5: \t";
        cin>>randomnumb;
        if (randomnumb!=randnum){
            health-=5;
            cout<<"Ouch, you healthpoint -5"<<endl;
                if(health==0){
                cout<<"Oops... You died!"<<endl;
                break;
                }
            continue;
        }

        if (randomnumb==randnum){
          cout<<"Phew... Good number!"<<endl;
          cout<<"Your health piont +10"<<endl;
          health+=10;
            continue;  
        }
    }

return 0;
}
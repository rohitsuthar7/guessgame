//this is my first repository 
// I am rohit suthar.
//this is a test comment
#include<iostream>
#define limit 3
using namespace std;
void startgame();

int main(){

  int ch;
  while(1){
    cout<<"**********GUESSING GAME*************"<<endl;
    cout<<"1. Start the Game"<<endl;
    cout<<"2. Exit or End the Game."<<endl<<endl;

    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>ch;
    switch(ch){
      case 1:startgame();break;
      case 2:exit(0);break;
      default:cout<<"-----Invalid choice-------\n\n";
    }
  }
  return 0;
}

void startgame(){
    int secretNum=7;
    int guess;
    int guesscount=0;
    cout<<"Get ready....you have three chances to guess the number\n\n";

    while(secretNum!=guess){
        if(guesscount<3){
            cout<<"Enter the Guess number:";
            cin>>guess;
            guesscount++;
            if(secretNum==guess){
                cout<<"\n-------YOU WON!!!!-------\n\n";break;
            }
        }
        else{
                cout<<"\n-------YOU LOSE!!!!-------\n\n";break;
            }
        }
  /* for(int i=0;i<limit;i++)
      {
        cout<<"Enter the Guess number:";
            cin>>guess;
            guesscount++;
            if(secretNum==guess){
                cout<<"\n-------YOU WON!!!!-------\n\n";break;
            }
      }*/
    }


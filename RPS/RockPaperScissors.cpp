#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(NULL));

    int random = rand()%3;
    int menu;
    int move;

    cout << "******************************** Rock Paper Scissors ***********************************" << endl;
    cout << "\t 1--> Start Game \n\t 2--> Exit Game \n";
    cin >> menu;
    if(menu == 1){
        cout << "Let's start!\n";
        cout << "Choose! \n 1.rock \n 2.paper \n 3.scissor \n";
        cin >> move;
        switch(move){
            case 1:
                cout << "rock | \t Your choice" << endl;
            break;
            case 2:
                cout << "paper | \t Your choice" << endl;
            break;
            case 3:
                cout << "scissor | \t Your choice" << endl;
            break;
        }
        switch(random){  
            case 0: 
                cout << "rock | \t Enemy choice" << endl;
            break;
            case 1:
                cout << "paper | \t Enemy choice" << endl;
            break;
            case 2:
                cout << "scissor | \t Enemy choice" << endl;
            break;
        }
        if(move == 1 && random == 2){
            cout << "You win!" << endl;
        }
        else if(move == 2 && random == 0){
            cout << "You win!" << endl;
        }
        else if(move == 3 && random == 1){
            cout << "You win!" << endl;
        }
        else{
            cout << "You loose, too bad!" << endl;
        }
    }
    cout << "****************************************************************************************" << endl;
    
return 0;
}

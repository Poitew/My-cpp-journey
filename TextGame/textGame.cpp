#include <iostream>
#include <cstdlib>
using namespace std;

class player {
private:
    int money = 0;
public:
    void setMoney(int x){    // Encapsulation - setter
        money = x;
    }
    int getMoney(){         // Encapsulation - getter
        return money;
    }                      
    int level = 1;
    int health = 100;
    bool sword = false;
    bool knife = true;
    void fightSystem(player mainCharacter); // the fight system is below the int main
};

int main(){

    player mainCharacter;
    srand(time(NULL));
    
    int random = rand() % 3;
    char choice;
    int choice2;
    int x; // for the getter

    cout << "********************************************************* Text Based Game *********************************************************************" << endl;
    cout << "\t CHAPTER ONE" << endl;

    cout << "You woke up in a cave, in the middle of a giant spider nest, blocked by giant cobwebs, the spider queen is coming... " << endl << endl;
    cout << "a. use the sharp knife" << endl << "b. die" << endl;
    cin >> choice;
    cout << endl;

    if(choice == 'a'){
        cout << "You used the sharp knife to cut che cobwebs, in no time you start running, followed by the queen, " 
            << "after a while you find, on the right a gap, and on the left a small entrance" << endl << endl;
        cout << "a. jump the gap" << endl << "b. go to the small entrance" << endl;
        cin >> choice;
        cout << endl;
        
        if(choice == 'a'){
            cout << "unfortunately you could not jump that far, however the fall was not that high and on the bottom there was a river which took you outside the cave" << endl;
            cout << "After a few hours, it's finally night! you think it's not safe to sleep without someone watching out for monsters" << endl << endl;
            cout << "a. continue walking" << endl << "b. set a camp for the night" << endl;
            cin >> choice;
            cout << endl;

            if(choice == 'a'){
                cout << "eventually you stumble across a recognition squad of goblins, your little knife could not save you..." << endl;
            }
            else{
                cout << "fortunetly nobody saw you the whole night, maybe, after walink for a while you found a village, a real opportunity!" << endl << endl;
                cout << "a. try to find a job and live there" << endl << "b. without any money in your pocket you continue your journey" << endl;
                cin >> choice;
                cout << endl;

                if(choice == 'a'){
                    cout << "You found a job and lived there for weeks, until a large group of goblin guided by their king destroyed it and killed you";
                }
                else {
                    cout << "after not resting in a bed and eating for days you fainted and died...";
                }
            }
        }
        else {
            cout << "You went through the small entrance, the spiders were too big to do the same, " 
                << "you continued walking down the path until you saw a skeleton, probably an explorer because of the sword right besides him" << endl << endl;
            cout << "a. take the sword" << endl << "b. don't" << endl;
            cin >> choice;
            cout << endl;

            if(choice == 'a'){
                mainCharacter.sword = true;
                cout << "without thinking much of your choices you start walking, after an hour of nothingness you see the exit, "
                    << "however as soon as you stepped outside you found yourself in the middle of a small goblin village... everyone saw you" << endl << endl;
                cout << "a. fight them" << endl << "b. flee" << endl;
                cin >> choice;
                cout << endl;

                if(choice == 'a' && mainCharacter.sword){
                    mainCharacter.fightSystem(mainCharacter);
                    if(mainCharacter.health > 1){
                        cout << "Level 2!" << endl;
                        cout << "You found 20 coins" << endl << endl;

                        // setter
                        mainCharacter.setMoney(20);
                        cout << "you fought... and won, all your scars now are symbol of honor, however you feel strange..." << endl;

                        mainCharacter.level++;
                        cout << "while on the verge of dying a group of royal guards who just saw what you did saved you, they took you to the nearby king which made you a royal knight" << endl;
                        cout << "Neutral Ending";
                    }                  
                }
                else if(choice == 'a' && mainCharacter.sword == false) {
                    cout << "that sword could have saved you life... or not";
                }
                else {
                    cout << "surrounded by goblin archers and warriors you could not flee away without them seeing you, eventually you run out of breath..."; 
                }
            }
            else {
                cout << "after exiting the cave you found yourself in a small goblin village, the knife was not enough";
            }
        }
    }
    else{
        cout << "you died";
    }
return 0;
}

// figthing system

void player::fightSystem(player mainCharacter){
    int choice2;
    cout << "Fight starting: " << endl;
    cout << "Watch out!" << endl << endl;  
    for(int i = 0; i < 5;){
        cout << "1. fight" << endl << "2. guard and heal" << endl;
        cin >> choice2;
        if(choice2 == 1){
            i++;
            mainCharacter.health -= 20;
            cout << "figthing..." << endl;
            cout << "you took damage" << endl << endl;
        }
        else {
            cout << "you guarded" << endl << endl;
            mainCharacter.health += 20;    
        }
        if(mainCharacter.health == 0){
            cout << "You died" << endl << "Hint: try healing";
        }
    }
}
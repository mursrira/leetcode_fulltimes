//Section 13
//Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string);
     bool is_dead();
};

class Account{
    //attributes
    string name="Account";
    double balance=0.0;

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main(){
    Account frank_accnt;
    Account jim_accnt;

    Player frank;
    Player hero;

    Player *enemy = nullptr;
    enemy=new Player;
    delete enemy;

    // players is an array of frank and hero Player object's.
    Player players[]= {frank,hero};
    vector<Player> player_vec;
    player_vec.push_back(frank);
    player_vec.push_back(hero);

    return 0;
}
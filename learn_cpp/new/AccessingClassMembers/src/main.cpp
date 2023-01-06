//Section 13
//Access Class Members
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say){
        cout<< name << " says: " << text_to_say << endl;
    };
     bool is_dead();
};

class Account{
public:
    //attributes
    string name="Account";
    double balance=0.0;

    //methods
    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
    };
    bool withdraw(double bal){
        balance -= bal;
        cout << "In withdrawl" << endl;
    }; 
};

int main(){

    Account frank_accnt;
    frank_accnt.name="Frank's account";
    frank_accnt.balance=5000;

    frank_accnt.deposit(1000);
    frank_accnt.withdraw(500);

    Player frank;
    frank.name="Frank";
    frank.health=100;
    frank.xp=12;
    frank.talk("Hi there!!!");

    // We will use -> operator when we initialized object on heap
    // and we try to access the variables or methods of it.
    Player *enemy = new Player;
    (*enemy).name="Enemy";
    (*enemy).health=100;
    enemy->xp=15;
    enemy->talk("I will destroy you!!!");

    return 0;
}
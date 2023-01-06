//Section 13
//Access Class Members
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
private:
    // attributes
    string name;
    int health;
    int xp;

public:
    // methods
    void talk(string text_to_say){
        cout<< name << " says: " << text_to_say << endl;
    };
     bool is_dead();
};

int main(){
    Player frank;
    /*
    we cannot access name attribute since these are private.
    frank.name="Frank";
    */
    frank.talk("Hello there!!!");
    return 0;
}
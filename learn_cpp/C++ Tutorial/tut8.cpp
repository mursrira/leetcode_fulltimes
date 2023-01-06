#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int secretNum = rand()%11;
    int guess = 0;

    do{
        cout << "Guess the Number: ";
        cin >> guess;
        if(guess>secretNum){
            cout<<"To Big\n";
        }
        if(guess<secretNum){
            cout<<"To Small\n";
        }
    } while ( secretNum != guess );


    while(true){
        cout << "Guess the Number: ";
        cin >> guess;
        if(guess>secretNum){
            cout<<"To Big\n";
        }
        if(guess<secretNum){
            cout<<"To Small\n";
        }
        if(guess==secretNum) break;
    }

    cout << "You Guessed It!" << endl;
    
    return 0;
}
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

    /* 
    // ------ Conditional Operators
    // ==, !=, <, >, <=, >=
    
    // ----- Logical Operators
    // && : if both are true it returns true
    // || : If either are true it returns true
    // ! : Converts true into false and vice versa
    */


   // Is a Birthday is Important or not
   // IMP: 1-18, 21, >65
   // Not IMP : 21-50

   string sAge = "0";

    cout << "Enter your age: ";
    cin >> sAge;

    int nAge = stoi(sAge);

    if((nAge >=1) && (nAge<=18)){
        cout << "Important Birthday\n";
    } else if((nAge == 21) || (nAge == 50)){
        cout << "Important Birthday\n";
    } else if( nAge >= 65 ){
        cout << "Important Birthday\n";
    } else {
        cout << "Not an Important Birthday\n";
    }


    // Determine school grade
    /*
        If 5: "Go to Kindergarten"
        Ages 6 through 17 Go to grades 1 through 12
        age > 17 "Go to College"
        else: Too young for school

        Ex: Enter age: 8
        // Go to grade 3
    */



   string sAge_n;
   cout << "Enter age: ";
   cin >> sAge_n;
   int sklNum;

    int iAge = stoi(sAge_n);

    if( iAge == 5 ){
        cout << "Go to Kindergarten\n";
    } else if( (iAge>=6) && (iAge<=17) ){
        sklNum = iAge-5;
        cout << "Go to grade " << sklNum << "\n";
    } else if( iAge > 17 ){
        cout << "Go to College\n";
    } else {
        cout << "Too young for school\n";
    }

    // Ternary Operator
    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true:false;

    cout.setf(ios::boolalpha);
    cout << "Can Derek vote : " << canIVote << endl;

    return 0;
}
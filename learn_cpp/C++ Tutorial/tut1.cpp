/*
Premade Functions
*/

/* Pre-Processor directives:
This files includes buch of files, that will
allow buch of functions for us to use
*/

/* This has functions:
1. Converting from one data type to another datatype
2. Generating Randomn Numbers
3. Memory management
4. Searching, Sorting, Maps
*/
#include <cstdlib>

/*Would receive input and provide output to the user*/
#include <iostream>
using namespace std;

/*
main:-
argc : Tells how many arguments are passed to the program
        inside the command line.
argv[] : These are the arguments: i mean words or things
        that came with this with spaces etc..
*/
int main(int argc, char* argv[]){
    cout << "Hello World" << endl;

    if(argc!=1){
        cout << "You entered " << argc << " arguments\n";
        for(int i=0; i<argc; ++i){
            cout << argv[i] << "\n";
        }
    }
    return 0;

}


/*

❯ ./tut1
Hello World

❯ ./tut1 Hello C++
Hello World
You entered 3 arguments
./tut1
Hello
C++

*/
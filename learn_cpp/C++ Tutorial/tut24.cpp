#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
Dog:
Attributes: Height, Weight, Color, Food
Capabilities: Run, Walk, Eat
*/

class Animal{

    private:
        string name;
        double height;
        double weight;

        // Every object you create will have same value
        static int numOfAnimals;
    
    public:
        // Getter
        string GetName() {return name;}
        // Setter
        void SetName(string name){
            this->name = name;
        }
        string GetHeight() {return height;}
        void SetHeight(double height){
            this->height = height;
        }
        string GetWeight() {return weight;}
        void SetWeight(double weight){
            this->weight = weight;
        }

        // Function Prototypes
        void SetAll(string, double, double);

        // Constructor
        Animal(string, double, double);
        Animal();
        // Deconstructor, when object is not being used.
        ~Animal();

        // Getter for static variables
        // A function can have access to static variables, only if it is also static
        static int GetNumOfAnimals(){
            return numOfAnimals;
        }

        void ToString();

};

// Set values for static class variables
int Animal::numOfAnimals = 0;

void Animal::SetAll( string name, double height, double weight ){
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

// :: -> use anytime we want to refer to variables or function's.

Animal::Animal(string name, double height, double weight){
    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(){
    this->name = "";
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

Animal::~Animal(){
    cout << "Animal " << this->name << "Destroyed\n";
}

void Animal::ToString(){
    cout << this-> name << " is " << this->height << "cms tall and  " <<
    this->weight << " kgs in weight\n";
}

int main(){

    Animal fred;
    fred.SetHeight(33);
    fred.SetWeight(10);
    fred.SetName("Fred");
    fred.ToString();

    return 0;
}
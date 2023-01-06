#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

#pragma once

class Account{
private:
    //attributes
    std::string name;
    double balance;

public:
    //methods
    //declared inline
    void set_balance(double bal){
        balance=bal;
    }
    double get_balance(){
        return balance;
    }

    //methods will be declared outside
    //the class decleration.
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

};

#endif
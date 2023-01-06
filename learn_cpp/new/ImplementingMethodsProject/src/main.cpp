//Section 13
//Implementing member methods1
#include <iostream>
#include <string>

using namespace std;

class Account{
private:
    //attributes
    string name;
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
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

};

void Account::set_name(string n){
    name=n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance-amount>=0){
        balance-=amount;
        return true;
    } else {
        return false;
    }
}

int main(){
    Account frank_accnt;
    frank_accnt.set_name("Frank's accnt");
    frank_accnt.set_balance(1000);

    if(frank_accnt.deposit(200)){
        cout<<"Deposit ok"<<endl;
    } else {
        cout<<"Deposit Not allowed"<<endl;
    }

    if(frank_accnt.withdraw(500)){
        cout<<"Withdraw ok"<<endl;
    } else{
        cout<<"Not sufficient funds"<<endl;
    }


    if(frank_accnt.withdraw(1500)){
        cout<<"Withdraw ok"<<endl;
    } else{
        cout<<"Not sufficient funds"<<endl;
    }

    return 0;
}
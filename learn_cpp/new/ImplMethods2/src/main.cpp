// Section13
// Implementing member methods 2
#include <iostream>
#include "Account.h"
using namespace std;

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
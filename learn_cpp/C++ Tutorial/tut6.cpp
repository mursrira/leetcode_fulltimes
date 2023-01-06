#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


int main(){
    //Accept Input
    //Provide Output
    //Store Values

    for( int i=0; i<=10; ++i ){
        cout << i << endl;
    }

    int arr1[] = {1,2,3};
    int arrSize = (sizeof(arr1)/(sizeof(arr1[0])));

    for( int i=0; i<arrSize; ++i){
        cout << arr1[i] << endl;
    }

    for(auto x: arr1) cout << x << endl;

    int num = 4;
    string isEven = ((num%2)==0)?"Even":"Odd";
    cout << "Even or Odd : " << isEven << endl;

    for( int i=0; i<=20; ++i){
        if((i%2)!=0){
            cout << i << endl;
        }
    } 

    // Compounding Interest

    // How much to Invest :
    // Expected ineterest rate
    // total + investment + total*interest   

    float investment, interest, total;
    cout << "How much to Invest : ";
    cin >> investment;
    total = investment;

    cout << "Interest Rate: ";
    cin >> interest;
    interest = interest*0.01;

    for(int i=0;i<10;++i){
        total = total+ investment + (total*interest);
    }

    printf("Investment After 10 Years: %.2f\n", total);

    return 0;
}
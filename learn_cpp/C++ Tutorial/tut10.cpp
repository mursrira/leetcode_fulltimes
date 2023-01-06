#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

// Use vectors when you dont know the 
// size of the array...

using namespace std;

int main(){

    vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;

    vecRandNums.push_back(30);
    cout << "Vector Size : " << vecRandNums.size() << endl;
    cout << "Last Index: " << vecRandNums[ vecRandNums.size()-1 ] << endl;

    vector<int>::iterator it;
    it = find(vecRandNums.begin(), vecRandNums.end(), 20);
    cout << *it << endl;

    string sSentence = "This is a random string";
    vector<string> vecWords;
    stringstream ss(sSentence);

    string sIndivStr;
    char cSpace = ' ';

    while (getline(ss, sIndivStr, cSpace)) {
        vecWords.push_back(sIndivStr);
    }

    for(int i=0; i<vecWords.size(); ++i){
        cout << vecWords[i] << endl;
    }

    /*
    Problem:
    Enter Calculation (ex. 5+6): 10-6
    10.0-6.0 = 4.0
    */

   double dbNum1 = 0, dbNum2 = 0;
   string sCalc = "";
   vector<string> vecsCalc;

   cout << "Enter Caluclation (ex. 5 + 6) : ";
   getline(cin, sCalc);

   stringstream ss2(sCalc);
   string indivStr;
   char space = ' ';

   while (getline(ss2, indivStr, space))
   {
    vecsCalc.push_back(indivStr);
   }

    dbNum1 = stoi(vecsCalc[0]);
    dbNum2 = stoi(vecsCalc[2]);
    string operation = vecsCalc[1];

    if(operation=="+"){
        printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1+dbNum2));
    } else if(operation=="-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1-dbNum2));
    } else if(operation=="*"){
        printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1*dbNum2));
    } else if(operation=="/"){
        printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1/dbNum2));
    } else {
        cout << "Please Enter only +, -, *, or /\n" << endl;
    }
   
    return 0;
}
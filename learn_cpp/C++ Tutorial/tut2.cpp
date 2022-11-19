#include <cstdlib>
#include <iostream>
#include <string>

/*
It provides function's that provide's
min and max for data types.
*/
#include <limits>

using namespace std;

/*
Global Variable
It is declared outside the main function
and can be accessed anywhere..
*/
int g_iRandNum = 0;

/*constants: variable's whose value does not change 
over entire program*/
const double PI=3.14159265;

int main(){

    bool bMarried = true;

    /*stores any of 256 single characters*/
    char chMyGrade = 'A';
    
    /*no negative values
    short int : value up to 65K*/
    unsigned short int u16Age=43;
    short int siWight = 180; /*min: -32000 and max: 32,000*/
    int nDays=7; /*min=-2billion to max=2billion*/
    long lBigNum = 100000;
    float fPi=3.14159; /*Holds decimal value, precision upto 6 numbers after decimal*/

    float fBigFlaot1 = 1.11111111;
    float fBigFlaot2 = 1.11111111;
    float fFloatSum = fBigFlaot1+fBigFlaot2;

    printf("fFloatSum Precision : %.10f\n", fFloatSum);
    /*fFloatSum Precision : 2.2222223282, we can see we have only 6 digits of precision
    thats how floats work, 6 digits of precision*/


    cout << "Min Double " << numeric_limits<double>::min() << endl;
    cout << "Max Double " << numeric_limits<double>::max() << endl;
    /*
    Min Double 2.22507e-308
    Max Double 1.79769e+308
    */


    double dbBigDouble1 = 1.1111111111111111;
    double dbBigDouble2 = 1.1111111111111111;
    double dbBigDoubleSum = dbBigDouble1+dbBigDouble2;

    printf("dbBigDoubleSum Precision : %.20f\n", dbBigDoubleSum);
    /*dbBigDoubleSum Precision : 2.22222222222222232091, 
    we can see we have only 15 digits of precision after decimal
    thats how double's work, 15 digits of precision*/

    /* In a second i will show you how big they get*/
    long double ldPi = 3.14; 

    /* compiler decides what type it can be */
    auto whatWillIBe = true; /* compiler turns whatWillIBe in to boolean */

    cout << "Min int " << numeric_limits<int>::min() << endl;
    cout << "Max int " << numeric_limits<int>::max() << endl;

    cout << "Min long " << numeric_limits<long>::min() << endl;
    cout << "Max long " << numeric_limits<long>::max() << endl;

    cout << "Min float " << numeric_limits<float>::min() << endl;
    cout << "Max float " << numeric_limits<float>::max() << endl;

    cout << "Min long double " << numeric_limits<long double>::min() << endl;
    cout << "Max long double " << numeric_limits<long double>::max() << endl;

    cout << "Min double " << numeric_limits<double>::min() << endl;
    cout << "Max double " << numeric_limits<double>::max() << endl;

    cout << "Min long long " << numeric_limits<long long>::min() << endl;
    cout << "Max long long " << numeric_limits<long long>::max() << endl;

    /*
    Min int -2147483648
    Max int 2147483647
    Min long -9223372036854775808
    Max long 9223372036854775807
    Min float 1.17549e-38
    Max float 3.40282e+38
    Min long double 2.22507e-308
    Max long double 1.79769e+308
    Min double 2.22507e-308
    Max double 1.79769e+308
    Min long long -9223372036854775808
    Max long long 9223372036854775807
    */

   // To display number of bytes used by a specific data type

   cout << "int Size " << sizeof(int) << endl;

   // output character do: %c
   // output regular whole number do: %d
   /* if you want to put 5 spaces btw prev number and current number we can
      do below */
   // 3 point decimal precision we can .3f
   // %s: strings
   printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi" );
   /*
   int Size 4
   A 10     5 3.123 Hi
   */


   return 0;

}


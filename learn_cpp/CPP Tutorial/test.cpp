#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main( int argc, char* argv[] ){
    string sMiles;
    double dMiles, dKilometers;
    cout << "Enter miles : ";
    getline(cin, sMiles);
    dMiles = stod(sMiles);
    dKilometers = dMiles*1.60934;
    printf("%.1f miles equals %.4f kilometers \n", dMiles, dKilometers);
    return 0;
}
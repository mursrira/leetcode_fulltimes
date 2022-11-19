/*
Question:
This is what I expect output wise with your solution.
Enter Miles : 5
5 miles equals 8.0467 kilometers
To find kilometers you have to multiply miles times 1.60934.
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
 
int main() {
    // Create needed variables
    string sMiles;
    double dMiles, dKilometers;
    
    // Ask user to input miles and store string input
    cout << "Enter Miles : ";
    cin >> sMiles;
    
    // Convert from string to double
    dMiles = stod(sMiles);
    
    // Convert from miles to km
    dKilometers = dMiles * 1.60934;
    
    // Output the results
    printf("%.1f miles equals %.4f kilometers\n", dMiles, dKilometers);

    return 0;
}
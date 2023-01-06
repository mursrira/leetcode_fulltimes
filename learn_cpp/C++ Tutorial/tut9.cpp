#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
using namespace std;

int main(){
    int arrNums[10] = {1};
    for( auto x: arrNums ){
        cout << x << endl;
    }

    int arrNums2[] = {1,2,3};
    int arrNums3[5] = {8,9};

    cout << "1st Value: " << arrNums3[0] << endl;
    arrNums3[0] =7;
    cout << "1st Value: " << arrNums3[0] << endl;

    cout << "Array Size: " << sizeof(arrNums3)/sizeof(*arrNums3) << "\n";

    int arrSize = sizeof(arrNums2)/(sizeof(arrNums[0]));

    for(int i=0; i< arrSize; ++i){
        cout << arrNums2[i] << endl;
    }

    array<int, 5> arrNums4={9,8,7,6};
    for(auto j=arrNums4.begin(); j!=arrNums4.end(); ++j){
        cout << " " << *j;
    }

    cout << "\n";
    cout << "Size : " << arrNums4.size() << "\n";
    cout << "Max Size: " << arrNums4.max_size() << "\n";

    cout << "Empty : "<< (arrNums4.empty() ? "Yes" : "No") << endl;

    cout << "1st : " << arrNums4[0] << endl;
    cout << "2nd : " << arrNums4.at(1) << endl;
    arrNums4.fill(5);

    array<int, 5> arrNums5 = {9, 8, 7, 6};
    arrNums5.swap(arrNums4);

    for(auto x:arrNums5){
        cout << x << endl;
    }

    // If we need resizable arrays it
    // is better to use vectors instead.


    // Multi dimensional array

    int arrnNums4[2][2][2]= {{ {1,2},{3,4}}, {{5,6},{7,8}} };
    cout << arrnNums4[1][1][1] << endl;

    
    return 0;
}
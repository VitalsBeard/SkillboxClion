#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
#include <stdio.h>

using namespace std;


int main()
{
    float carSpeedTotal ;
    string carSpeed ;
    char speed[10];



    while (carSpeedTotal >0){
        cout << "Speed delta: ";
//        cin >> carSpeed;
         sprintf(speed, "%.1f", stof(carSpeed));
        carSpeedTotal += speed[0];
        cout << "Speed: " << carSpeedTotal<< "\n";
    }
}


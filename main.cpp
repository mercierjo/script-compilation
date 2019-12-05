#include <iostream>
#include <string>
#include "truck.hpp"

using namespace std;

int main() {
    int nbOfWheel = 4;
    string brand = "MAN";
    string model = "Super truck";
    string sound = "Vroum";
    Truck truck(nbOfWheel, model, brand, sound);

    cout << "======= Truck ========\nNumber of wheel:\t" << nbOfWheel
    << "\nBrand:\t" << brand 
    << "\nModel:\t" << model 
    << "\nSound:\t" << sound;
}
#include "vehicule.hpp"
#include <string>

using namespace std;

class Truck : Vehicule {
private:
    string sound;
public:
    Truck(int nbOfWheel, string model, string brand, string sound);
    void setSound(string sound);
    string getSound();
};
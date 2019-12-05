#include "truck.hpp"

Truck::Truck(int nbOfWheel, string model, string brand, string sound) 
    : Vehicule(nbOfWheel, model, brand) {
    this->sound = sound;
}

void Truck::setSound(string sound) {
    this->sound = sound;
}

string Truck::getSound() {
    return this->sound;
}
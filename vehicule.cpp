#include "vehicule.hpp"

Vehicule::Vehicule(int nbOfWheel, string model, string brand) {
    this->nbOfWheel= nbOfWheel;
    this->model = model;
    this->brand = brand;
}

void Vehicule::setNbOfWheel(int nbOfWheel) {
    this->nbOfWheel = nbOfWheel;
}

void Vehicule::setModel(string model) {
    this->model = model;
}

void Vehicule::setBrand(string brand) {
    this->brand = brand;
}

int Vehicule::getNbOfWheel() {
    return this->nbOfWheel;
}

string Vehicule::getModel() {
    return this->model;
}

string Vehicule::getBrand() {
    return this->brand;
}
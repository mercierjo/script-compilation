#include <string>

using namespace std;

class Vehicule
{
private:
    int nbOfWheel;
    string model;
    string brand;

public:
    Vehicule(int nbOfWheel, string model, string brand);
    void setNbOfWheel(int nbOfWheel);
    void setModel(string model);
    void setBrand(string brand);
    int getNbOfWheel();
    string getModel();
    string getBrand();
};
#include <iostream>
using namespace std;
class TollBooth
{
    unsigned int numberOfCars;
    double moneyCollected;

public:
    TollBooth() : numberOfCars(0), moneyCollected(0) {}
    void payingCars(){
        numberOfCars++;
        moneyCollected+=0.5;
    }

    void noPayCar(){
        numberOfCars++;
    }

    void printOnConsole(){
        cout<<"Total Cars: "<<numberOfCars<<endl;
        cout<<"Money Collected: "<<moneyCollected<<endl;
        cout<<"Paying Cars: "<<moneyCollected*2<<endl;
        cout<<"Non Paying Cars: "<<numberOfCars-moneyCollected*2<<endl;
    }
};

int main()
{
    TollBooth t;
    t.noPayCar();
    t.noPayCar();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.payingCars();
    t.printOnConsole();
    return 0;
}
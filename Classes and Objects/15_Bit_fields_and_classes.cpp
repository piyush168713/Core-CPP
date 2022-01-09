// Program to use bit fields with classes and display the contents of the bit fields.

#include<iostream>
#define PETROL 1
#define DIESEL 1
#define TWO_WH 3
#define FOUR_WH 4
#define OLD 5
#define NEW 6

class vehicle{
    private:
    unsigned type : 3;
    unsigned fuel : 2;
    unsigned model : 3;
    public:
    vehicle(){
        type = FOUR_WH;
        fuel = PETROL;
        model = NEW;
    }

    void show(){
        if (model == NEW)
        std::cout<<"New Model";
        else
        std::cout<<"\nOld Model";
        std::cout<<"\nType of vehicle: "<<type;
        std::cout<<"\nFuel: "<<fuel;
    }
};

int main(){
    vehicle v;
    std::cout<<"Size of Object: "<<sizeof(v)<<std::endl;
    v.show();
    return 0;
}
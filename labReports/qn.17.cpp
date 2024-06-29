//wap that has class Car and member model, color, brand and function getData(), showData(). It has a engine class with member functions accelerate(), and brake(). Create an object of Car and call the functions. use the concept of composition.

#include <iostream>
using namespace std;

class Engine{
public:
    void accelerate(){
        cout << "Car is accelerating" << endl;
    }
    void brake(){
        cout << "Car is braking" << endl;
    }
};

class Car{
    string model;
    string color;
    string brand;
public:
    Engine engine;
    void getData(string model, string color, string brand){
        this->model = model;
        this->color = color;
        this->brand = brand;
    }
    void showData(){
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Brand: " << brand << endl;
    }
  
};

int main(){
    Car car;
    car.getData("Audi A4", "Black", "Audi");
    car.showData();
    car.engine.accelerate();
    car.engine.brake();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
        int noWheels;
        int engineNo;
        string name;
        float price;
        float netPrice;

        void  getDiscount(){
            float discount ;
            discount = price * 20 / 100;
            netPrice = price - discount;
        };

        void display(){
            cout << "The name of the vechile is : "<< name <<endl;
            cout << "The engine number of the vechile is : "<< engineNo <<endl;
            cout << "The number of wheels of the vechile is : "<< noWheels <<endl;
            cout << "The net price of the vechile is : "<< netPrice <<endl;
        }

};

int main(){
    Vehicle bike;
    Vehicle car;
    bike.noWheels = 2;
    car.noWheels = 4;
    bike.engineNo=98690;
    car.engineNo=6987579;
    bike.name = "honda splender";
    car.name = "maruti suzuki aulto 800";
    bike.price = 75000;
    car.price = 500000;

    bike.getDiscount();
    bike.netPrice;
    car.getDiscount();
    car.netPrice;

    bike.display();
    car.display();


}


// create object of vechile and display the result 
//honda bike
//maruti aulto 800

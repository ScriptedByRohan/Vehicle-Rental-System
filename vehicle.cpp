#include"vehicle.h"
#include"String_Helper.h"

const char DELIMITER = ';';
Vehicle :: Vehicle(string registerationNumber , VehicleType type , int seats, string companyname, double pricePerKm , Date PUCKExirationDate, long recordId) : Storable(recordId){
    this->registerationNumber = registerationNumber;
    this->type = type;
    this->seats = seats;
    this->companyname = companyname;
    this->pricePerKm = pricePerKm;
    this->PUCKExpirationDate = PUCKExirationDate;
}

string Vehicle :: getRegistrationNumber() const{return this -> registerationNumber;}
VehicleType Vehicle :: getVehicleType () const {return this -> type;}
int Vehicle :: getSeats() const {return this -> seats;}
string Vehicle :: getCompanyName() const{return this->companyname;}
double Vehicle :: getPricePerKm() const{return this->pricePerKm;}
Date Vehicle :: getPUCExpirationDate() const{return this->PUCKExpirationDate;}
void Vehicle :: setPricePerKm(double newPrice)  {this->pricePerKm = pricePerKm;}

string Vehicle :: getVehicleTypeName() const {
    switch (this -> type)
    {
    case VehicleType :: bike:
    return "bike";
    
    case VehicleType :: car:
    return "car";
    
    case VehicleType :: towera:
    return "towera";
    
    default:
        return "";
    }
}

void Vehicle :: display () const {
    cout<<"Vehicle Details:"<<endl;
    cout<<"Registration number:"<<this -> registerationNumber<<endl;
    cout<<"vehicle type:"<<this -> getVehicleTypeName()<<endl;
    cout<<"number of seats:"<<this -> seats<<endl;
    cout<<"company name:"<<this -> companyname<<endl;
    cout<<"price per km:"<<this -> pricePerKm<<endl;
    cout<<"puc expiration date:"<<this -> PUCKExpirationDate.tostring()<<endl;
}


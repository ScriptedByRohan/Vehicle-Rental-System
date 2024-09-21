/*Any subclass of this class can be stored in a file . as all data stored in a file must be sterialization, this clas is derived from Serializable class*/


#ifndef storable_cpp
#define storable_cpp

#include "Serializable.cpp"

#include<string>
#include<iostream>

class Storable : public serializable{
protected: //so only derived class can only access this 
long recordId;

public:
    Storable(long recordId){this->recordId = recordId;};
    long getRecordId() const{ return this->recordId;};

    virtual void setDataFrom (Storable)


};
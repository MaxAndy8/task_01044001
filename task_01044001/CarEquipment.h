#pragma once
#include <memory>
#include "Engine.h"
#include "Body.h"
#include "Transmission.h"

class CarEquipment {                     
public:
	virtual std::shared_ptr<Engine>       createEngine()       = 0;
	virtual std::shared_ptr<Body>         createBody()         = 0;
	virtual std::shared_ptr<Transmission> createTransmission() = 0;
	virtual double                        getPrice()           = 0;
    virtual ~CarEquipment() {}
};

class NissanLeaf2020 : public CarEquipment {
public:
	std::shared_ptr <Engine> createEngine() override
	{
		return (std::make_shared <AA43F_Engine>());
	}
	std::shared_ptr <Body> createBody() override
	{
		return  (std::make_shared <Body>(5, 5));
	}
	std::shared_ptr <Transmission> createTransmission() override
	{
		return  (std::make_shared <Transmission>(TransmissionType::Automatic, 5, DriveType::Front));
	}
	double getPrice() override
	{
		return  (1200000);
	}
};

class MercedesBenzBClass2017: public CarEquipment {
public:
	std::shared_ptr <Engine> createEngine() override
	{
		return (std::make_shared <BB67U_Engine>());
	}
	std::shared_ptr <Body> createBody() override
	{
		return  (std::make_shared <Body>(3, 5));
	}
	std::shared_ptr <Transmission> createTransmission() override
	{
		return  (std::make_shared <Transmission>(TransmissionType::Mechanical, 5, DriveType::Front));
	}
	double getPrice() override
	{
		return  (1500000);
	}
};




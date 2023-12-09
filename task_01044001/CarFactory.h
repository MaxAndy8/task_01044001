#pragma once
#include<iostream>
#include "Car.h"
#include "CarEquipment.h"
#include <memory>


class CarFactory
{
	/*	конфігурація */
	shared_ptr <CarEquipment> carEquipment;
public:
	CarFactory() {
		carEquipment = nullptr;
	}
	virtual ~CarFactory() {
	}
	shared_ptr <CarEquipment> GetCarEquipment() {
		return (carEquipment);
	}
	void SetCarEquipment(shared_ptr <CarEquipment> currentCarEquipment) {
		carEquipment = (currentCarEquipment);
	}
	/*
	функція збірки
	*/
	void Configure(shared_ptr <Car> car)
	{
		car->SetEngine(carEquipment->createEngine());
		car->SetBody(carEquipment->createBody());
		car->SetTransmission(carEquipment->createTransmission());
		car->SetPrice(carEquipment->getPrice());
		
	}
};

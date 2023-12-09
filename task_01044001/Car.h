#pragma once
#include <iostream>
#include "Engine.h"
#include "Body.h"
#include "Transmission.h"
#include <memory>


using namespace std;

// клас комп'ютер  
class Car {
	shared_ptr <Engine>       engine      ;
	shared_ptr <Body>         body        ;
	shared_ptr <Transmission> transmission;
	double                    price   = 0.0;
public:
	Car() {
		engine = nullptr;
		body = nullptr;
		transmission = nullptr;		
	}
	virtual ~Car() {
	}
	shared_ptr <Engine> GetEngine() {
		return (engine);
	}
	void SetEngine(shared_ptr <Engine> pEngine) {
		engine = (pEngine);
	}
	
	shared_ptr <Body> GetBody() {
		return (body);
	}
	void SetBody(shared_ptr <Body> pBody) {
		body = (pBody);
	}
	shared_ptr <Transmission> GetTransmission() {
		return (transmission);
	}
	void SetTransmission(shared_ptr <Transmission> pTransmission) {
		transmission = (pTransmission);
	}
	double GePrice() {
		return (price);
	}
	void SetPrice(double pPrice) {
		price = (pPrice);
	}

};
